// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e6+9, inf = 1e9;
int n, dp[maxN];
int f(int i)
{
    if(i== 0)
        return 0;
    if(dp[i] !=-1)
        return dp[i];
    int ans = inf;
    int rem = i;
    while(rem > 0)
    {
        int x = rem%10;
        rem /= 10;
        if(x>0)
        {
            ans = min(ans, 1+f(i-x));
        }
    }
    return dp[i] = ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=0; i<=n; i++)
        dp[i] = -1;
    cout << f(n) << nl;
    return 0;
}