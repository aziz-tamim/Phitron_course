// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
ll dp[1005];
int fibonacci(ll n)
{
    if(n==0 || n==1)
        return n;
    if(dp[n] != -1)
        return dp[n];
    dp[n] = fibonacci(n-1) + fibonacci(n-2);
    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp,-1,sizeof(dp));
    ll n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}

