// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int dp[200005][2];
int n;
vector<int> a;
int f(int i, int aij)
{
    if(i>n)
        return 0;
    if(dp[i][aij] != -1)
        return dp[i][aij];
    int ans = 1e9;
    if(aij == 0)
    {
        int skip1 = (a[i] == 1 ? 1 : 0) + f(i+1, 1);
        ans = min(ans, skip1);
        if(i + 1 <= n)
        {
            int skip2 = (a[i]==1 ? 1 : 0) + (a[i+1] == 1 ? 1 : 0) + f(i+2, 1);
            ans = min(ans, skip2);
        }
    }
    else
    {
        ans = min(ans, f(i+1, 0));
        if (i+1 <= n)
            ans = min(ans, f(i+2, 0));
    }
    return dp[i][aij] = ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        a.resize(n+2);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        memset(dp, -1, sizeof(dp));
        cout << f(1, 0) << '\n';
    }
    return 0;
}