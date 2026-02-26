// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e5+9, inf = 2e9;
int n,k, h[maxN], dp[maxN];
int f(int i)
{
    if(i==n)
        return 0;
    if(dp[i] != -1)
        return dp[i];
    int ans = inf;

    for(int j=1; j<=k; j++)
    {
        if(i+j <= n)
        {
            ans = min(ans, abs(h[i]-h[i+j]) + f(i+j));
        }
    }
    return dp[i] = ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin >> h[i];
    for(int i=0; i<=n; i++)
        dp[i] = -1;
    cout << f(1) << nl;
    return 0;
}