// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 2e5+5;
bool vis[maxN];
vector<int> adj_list[maxN];
int par[maxN];

int cnt1,cnt2;
bool is_cycle;
void dfs(int src)
{
    vis[src] = true;
    cnt1++;
    if(adj_list[src].size() != 2)
        is_cycle = false;
    cnt2 += adj_list[src].size();
    for(int x : adj_list[src])
    {
        if(vis[x] == false)
            dfs(x);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin >> n >> e;
    for(int i=0; i<e; i++)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int cycle_com = 0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i] == false)
        {
            cnt1 = 0;
            cnt2 = 0;
            is_cycle = true;
            dfs(i);
            cnt2 /= 2;
            if(cnt1 >= 3 && is_cycle && cnt1 == cnt2)
                cycle_com++;
        }
    }
    cout << cycle_com << nl;
    return 0;
}