#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        ll M;
        cin >> N >> M;
        vector<ll> A(N), B(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        ll Y = 0, X_min = 0;
        for (int i = 0; i < N; i++)
        {
            X_min = max(X_min, A[i] - Y);
            Y += B[i];
        }

        ll total_B = accumulate(B.begin(), B.end(), 0LL);
        ll fXmin = X_min + total_B;
        ll ans = 0;

        if (M < X_min)
        {
            ans = M * fXmin;
        }
        else
        {
            // constant part
            ans += (X_min - 1) * fXmin;
            // linear part
            ll cnt = M - X_min + 1;
            ll sum_linear = M * (M + 1) / 2 - (X_min - 1) * X_min / 2;
            ans += sum_linear + cnt * total_B;
        }
        cout << ans << "\n";
    }
    return 0;
}
