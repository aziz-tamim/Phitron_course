// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int nmax = 3e5;
int taw[nmax+10];
vector<int> divisors[nmax+10];
const int oo = 1e9;
void seiveTaw()
{
    for(int i=1; i<=nmax; i++)
    {
        for(int m=i; m<=nmax; m+=i)
        {
            divisors[m].push_back(i);
        }
    }
}
void solve(int test_case)
{
    int n;
    cin >> n;
    vector<int> a(n+1), dp(n+1, oo);
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        dp[a[i]] = 1;
    }
    for(int i=1; i<=n; i++)
    {
        for(int d : divisors[i])
        {
            dp[i] = min(dp[i], dp[d] + dp[i/d]);
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(dp[i] == oo)
            cout << -1 << sp;
        else
            cout << dp[i] << sp;
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    seiveTaw();
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve(tc);
    }
    return 0;
}