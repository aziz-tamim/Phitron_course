// // AUTHOR :- ABDUL AZIZ TAMIM
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl "\n"
// #define sp " "
// const int maxN = 1e5+9;
// ll n, a[maxN], b[maxN], c[maxN], dp[maxN][3];  // complexity O(9*n)
// int f(int i, int last)
// {
//     if(i>n)
//         return 0;

//     if(dp[i][last] != -1)
//         return dp[i][last];

//     ll ans = 0;
//     for(int k=0; k<3; k++)
//     {
//         if(k == last)
//             continue;
//         if(k == 0)
//             ans = max(ans, a[i]+f(i+1, k));
//         else if(k==1)
//             ans = max(ans, b[i] + f(i+1, k));
//         else
//             ans = max(ans, c[i]+f(i+1,k));
//     }
//     return dp[i][last] = ans;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> n;
//     for(int i=1; i<=n; i++)
//         cin >> a[i] >> b[i] >> c[i];
//     memset(dp,-1,sizeof(dp));
//     cout << f(1,3) << nl;
//     return 0;
// }

// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e5+9;
ll n, dp[maxN][3], happiness[maxN][3];  // complexity O(9*n)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> happiness[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        dp[1][i] = happiness[1][i];
    }
    for(int day = 1; day <= n; day++)
    {
        for(int currentTask = 0; currentTask < 3; currentTask++)
        {
            ll maxProfit = 0;
            for(int lastTask = 0; lastTask < 3; lastTask++)
            {
                if(lastTask != currentTask)
                {
                    maxProfit = max(maxProfit,dp[day-1][lastTask]+happiness[day][currentTask]);
                }
            }
            dp[day][currentTask] = maxProfit;
        }
    }
    cout << max({dp[n][0], dp[n][1],dp[n][2]}) << nl;
    return 0;
}