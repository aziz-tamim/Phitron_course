#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
pair<int,int> pare[1005][1005];
int n, m;
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;

    while(!q.empty())   
    {
        pair<int,int> par = q.front();
        q.pop();
        int ei = par.first;
        int ej = par.second;
        for(int k = 0; k<4; k++)
        {
            int ci = ei + d[k].first;
            int cj = ej + d[k].second;
            if(valid(ci,cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D'))
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                pare[ci][cj] = {ei,ej};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    int si, sj, ti,tj;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if(grid[i][j] == 'D')
            {
                ti = i;
                tj = j;
            }
            pare[i][j] = {-1,-1};
            vis[i][j] = false;
        }
    }
    bfs(si,sj);
    if(vis[ti][tj])
    {
        int ci = ti;
        int cj = tj;
        while(!(ci == si && cj == sj))
        {
            pair<int,int> par = pare[ci][cj];
            ci = par.first;
            cj = par.second;
            if(grid[ci][cj] == 'R')
                break;
            grid[ci][cj] = 'X';
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}