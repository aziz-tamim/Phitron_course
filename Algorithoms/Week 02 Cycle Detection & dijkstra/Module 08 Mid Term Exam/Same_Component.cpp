#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n, m;
int si,sj,ei,ej;
bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}
bool dfs(int si, int sj)
{
    vis[si][sj] = true;
    if(si == ei && sj == ej)
        return true;
    for(auto child : d)
    {
        int ci = si + child.first;
        int cj = sj + child.second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            if(dfs(ci,cj))
                return true;
        }
    }
    return false;
}
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> grid[i][j];
    cin >> si >> sj >> ei >> ej;

    memset(vis,false,sizeof(vis));

    if(grid[si][sj]=='-' || grid[ei][ej]=='-')
    {
        cout << "NO" << endl;
    }
    else
    {
        if(dfs(si,sj))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}