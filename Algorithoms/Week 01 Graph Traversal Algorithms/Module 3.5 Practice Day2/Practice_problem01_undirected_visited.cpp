#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited[1005];

int dfs(int src)
{
    visited[src] = true;
    int cnt = 1;
    for(int x : adj_list[src])
    {
        if(visited[x] == false)
        {
            cnt+= dfs(x);
        }
    }
    return cnt;
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
    int l;
    cin >> l;
    int ans = dfs(l);
    cout << ans << endl;
    return 0;
}