#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

// Fast modular exponentiation
long long mod_pow(long long a, long long b)
{
    long long res = 1;
    a %= MOD;
    while (b)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int M;
        cin >> M;
        vector<long long> ans(M + 1, 0);

        for (int N = 1; N <= M; N++)
        {
            long long sum = 0;
            for (int v = 0; v <= M / 2; v++)
            {
                long long c_v = max(0, M - 2 * v);
                long long c_next = max(0, M - 2 * (v + 1));
                long long cnt = (mod_pow(c_v, N) - mod_pow(c_next, N) + MOD) % MOD;
                sum = (sum + cnt * v) % MOD;
            }
            ans[N] = sum;
        }

        for (int i = 1; i <= M; i++)
        {
            cout << ans[i] << (i == M ? '\n' : ' ');
        }
    }

    return 0;
}
