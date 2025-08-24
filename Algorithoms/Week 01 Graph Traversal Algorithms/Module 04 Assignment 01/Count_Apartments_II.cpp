#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
bool valid(int i,int j)
{
    if(i<0 || i >= n || j<0 || j>=m)
        return false;
    return true;
}

int cnt;
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;
    for(int i=0; i<4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) == true && !vis[ci][cj] && grid[ci][cj] == '.')
            dfs(ci,cj);
    }
}

int main()
{
    cin >> n >>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> grid[i][j];

    vector<int> nodecnt;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!vis[i][j] && grid[i][j] == '.')
            {
                cnt = 0;
                dfs(i,j);
                nodecnt.push_back(cnt);
            }
        }
    }
    if(!nodecnt.empty())
    {
        sort(nodecnt.begin(), nodecnt.end());
        for(int x : nodecnt)
            cout << x << " ";
        cout << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}