// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int modN = 1e9+7;
int s;
ll dp[2005];
ll f(int i)
{
    if(i == 0)
        return 1;
    if(dp[i] != -1)
        return dp[i];     
    ll ans = 0;
    for(int j=3; j<=i; j++)
        ans = (ans + f(i-j)) % modN;
    return dp[i] = ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    memset(dp,-1,sizeof(dp));
    cout << f(s) << nl;
    return 0;
}