import pandas as pd
import numpy as np
import pickle
from sklearn.model_selection import train_test_split, cross_val_score, GridSearchCV
from sklearn.preprocessing import StandardScaler, OneHotEncoder
from sklearn.impute import SimpleImputer
from sklearn.compose import ColumnTransformer
from sklearn.pipeline import Pipeline
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_squared_error, mean_absolute_error, r2_score

# =====================
# Load dataset
# =====================
df = pd.read_csv("insurance.csv")

print(df.head())
print(df.shape)
print(df.info())
print(df.isnull().sum())

# ======================
# 2. Data Preprocessing
# ======================
dproc = df.shape[0]
df.drop_duplicates(inplace=True)
print(f"\nRemoved {dproc - df.shape[0]} duplicate rows")

#Outlier detection
def remove_outliers_iqr(data, column):
    Q1 = data[column].quantile(0.25)
    Q3 = data[column].quantile(0.75)
    IQR = Q3 - Q1
    lower = Q1 - 1.5 * IQR
    upper = Q3 + 1.5 * IQR
    return data[(data[column] >= lower) & (data[column] <= upper)]

dproc = df.shape[0]
df = remove_outliers_iqr(df, "bmi")
print(f"Removed {dproc-df.shape[0]} BMI outlier rows")

# Feature engineering
def bmi_category(bmi):
    if bmi < 18.5:
        return "Underweight"
    elif bmi < 25:
        return "Normal"
    elif bmi < 30:
        return "Overweight"
    else:
        return "Obese"

df["bmi_category"] = df["bmi"].apply(bmi_category)

#Encoding
X = df.drop("charges", axis=1)
y = df["charges"]

numeric_features = ["age", "bmi", "children"]
categorical_features = ["sex", "smoker", "region", "bmi_category"]
num_transformer = Pipeline(steps = [
    ("imputer", SimpleImputer(strategy="median")),
    ("scaler", StandardScaler())
])

cat_transformer = Pipeline(steps= [
    ("imputer", SimpleImputer(strategy="most_frequent")),
    ("encoder", OneHotEncoder(handle_unknown="ignore"))
])

preprocessor = ColumnTransformer(transformers = [
    ("num", num_transformer, numeric_features),
    ("cat", cat_transformer, categorical_features)
])

# =======================
# 3. Pipeline Creation
# =======================

rf_model = RandomForestRegressor(random_state=42, n_jobs=-1)
rf_pipeline = Pipeline(steps=[
    ("preprocessor", preprocessor),
    ("model", rf_model)
])

# ========= 4. Primary Model Selection ========= #

# Justification: RandomForestRegressor chosen because:
#   Handles non-linear relationships well (charges jump sharply for smokers)
#   Robust to outliers and mixed numeric/categorical (after encoding) data
#   No need for heavy feature scaling assumptions
#   Gives feature_importances_ for interpretability

# ========================
# 5. Model Training
# ========================
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)
rf_pipeline.fit(X_train, y_train)

# =========================
# 6. Cross Validation
# =========================
cv_scores = cross_val_score(
    rf_pipeline, X_train, y_train, cv=5, scoring="r2", n_jobs=-1
)
print(f"R2 scores per fold: {cv_scores}")
print(f"Average R2: {cv_scores.mean():.4f}")
print(f"Std Dev: {cv_scores.std():.4f}")

# ==========================
# 7. Hyperparameter Tuning
# ==========================
param_grid = {
    "model__n_estimators": [100, 200, 300],
    "model__max_depth": [5, 10, 15, None],
    "model__min_samples_split": [2, 5, 10],
    "model__min_samples_leaf": [1, 2, 4]
}
grid_search = GridSearchCV (
    estimator = rf_pipeline,
    param_grid = param_grid,
    cv=5, scoring="r2",
    n_jobs=-1, verbose=1
)
grid_search.fit(X_train, y_train)

print(f"Parameters tested: {param_grid}")
print(f"Best Parameters found: {grid_search.best_params_}")
print(f"Best CV R2 Score: {grid_search.best_score_:.4f}")

# ========================
# 8. Best Model Selection
# ========================
best_pipeline = grid_search.best_estimator_

# ========================
# 9. Model Performance Evaluation
# ========================
y_pred = best_pipeline.predict(X_test)
rmse = np.sqrt(mean_squared_error(y_test, y_pred))
mae = mean_absolute_error(y_test, y_pred)
r2 = r2_score(y_test, y_pred)

print(f"RMSE: {rmse:.4f}")
print(f"MAE: {mae:.4f}")
print(f"R2 Score: {r2:.4f}")

# ========= Save Model ========= #
with open("insurance_rf_pipeline.pkl", "wb") as f:
    pickle.dump(best_pipeline, f)

print("✅ Best Random Forest pipeline saved as insurance_rf_pipeline.pkl")
