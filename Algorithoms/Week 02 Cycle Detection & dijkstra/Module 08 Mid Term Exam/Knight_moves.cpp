#include<bits/stdc++.h>
using namespace std;
bool vis[105][105];
int level[105][105];
vector<pair<int,int>> d = {{2,-1},{1,-2},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2}};
int n, m;
int ei, ej;
bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

int bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        if(par_i == ei && par_j == ej)
            return level[ei][ej];
        for(int i=0; i<8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                q.push({ci,cj});
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int si, sj;
        cin >> si >> sj >> ei >> ej;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        cout << bfs(si,sj) << endl;
    }
    return 0;
}
