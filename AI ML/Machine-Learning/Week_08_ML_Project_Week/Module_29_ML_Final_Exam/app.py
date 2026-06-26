import gradio as gr
import pandas as pd
import pickle
import numpy as np

# 1. Load the trained pipeline
with open("insurance_rf_pipeline.pkl", "rb") as f:
    model = pickle.load(f)

# Helper: same feature engineering used during training
def bmi_category(bmi):
    if bmi < 18.5:
        return "Underweight"
    elif bmi < 25:
        return "Normal"
    elif bmi < 30:
        return "Overweight"
    else:
        return "Obese"

# 2. The Logic Function
def predict_charge(age, sex, bmi, children, smoker, region):

    bmi_cat = bmi_category(bmi)

    # Pack inputs into a DataFrame - column names must match training CSV
    input_df = pd.DataFrame([[
        age, sex, bmi, children, smoker, region, bmi_cat
    ]],
        columns=[
            "age", "sex", "bmi", "children", "smoker", "region", "bmi_category"
        ])

    prediction = model.predict(input_df)[0]

    return f"Predicted Medical Insurance Charge: {np.clip(prediction, 0, None):.2f}"

# 3. The App Interface
inputs = [
    gr.Number(label="Age", value=30),
    gr.Radio(["Male", "Female"], label="Sex"),
    gr.Number(label="BMI", value=25.0),
    gr.Slider(0, 5, step=1, label="Number of Children"),
    gr.Radio(["Yes", "No"], label="Smoker"),
    gr.Dropdown(["southwest", "southeast", "northwest", "northeast"], label="Region"),
]

app = gr.Interface(
    fn=predict_charge,
    inputs=inputs,
    outputs="text",
    title="Medical Insurance Cost Predictor",
    description="Enter patient details to predict estimated medical insurance charges."
)

app.launch()
