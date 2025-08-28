#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
void dfs(int src)
{
    vis[src] = true;
    for(int child : adj_list[src])
    {
        if(!vis[child])
            dfs(child);
    }
}
int main()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    vector<int> rep;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            rep.push_back(i);
            dfs(i);
        }
    }

    cout << rep.size()-1 << endl;
    for(int i=1; i<rep.size(); i++)
    {
        cout << rep[0] << " " << rep[i] << "\n";
    }
    return 0;
}
