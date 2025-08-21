#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void dfs(int src, int &cnt)
{
    vis[src] = true;
    cnt++;
    for(int child : adj_list[src])
    {
        if(vis[child] == false)
        {
            dfs(child, cnt);
        }
    }
}

int main()
{
    int n,e; // node edge input
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    vector<int> cmpo;
    
    for(int i=0; i<n; i++)
    {
        if(vis[i] == false)
        {
            int cnt = 0;
            dfs(i,cnt);
            cmpo.push_back(cnt);
        }
    }
    sort(cmpo.begin(), cmpo.end());
    for(int sz : cmpo)
        cout << sz << " ";
    cout << endl;
    return 0;
}