// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}
ll dfs(int si, int sj)
{
    vis[si][sj] = true;
    ll sum = grid[si][sj];
    for(int i=0; i<4; i++)
    {
        int ci = si+d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] > 0)
            sum+= dfs(ci,cj);
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin >> grid[i][j];
        }
        memset(vis,false,sizeof(vis));
        ll ans =0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] > 0 && vis[i][j] == false)
                {
                    ll lake = dfs(i,j);
                    ans = max(ans,lake);
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}