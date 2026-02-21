// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e5+5;
vector<int> adj_list[maxN];
int vis[maxN];
int arr[maxN];
int n,m;
int ans = 0;
void dfs(int n, int c)
{
    vis[n] = true;
    if(arr[n])
        c++;
    else
        c = 0;
    if(c > m)
        return;
    bool ok = true;
    for(int x : adj_list[n])
    {
        if(vis[x] == false)
        {
            ok = false;
            dfs(x,c);
        }
    }
    if(ok)
        ans++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    for(int i=0; i<n-1; i++)
    {
        int u,v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    dfs(1,0);
    cout << ans << nl;
    return 0;
}