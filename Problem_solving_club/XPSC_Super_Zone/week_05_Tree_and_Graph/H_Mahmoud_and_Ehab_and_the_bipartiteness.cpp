// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e5+5;
vector<int> a[maxN];
int n;
ll fstCnt = 0, scndCnt = 0;
ll visi[maxN];
void dfs(int u, int par, int col)
{
    visi[u] = 1;    
    if(col == 1)
        fstCnt++;
    else
        scndCnt++;
    for(int x : a[u])
    {
        if(x == par)
            continue;
        dfs(x,u,3-col);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1,0,1);
    ll edge = fstCnt*scndCnt;
    ll currEdge = n-1;
    ll ans = edge-currEdge;
    cout << ans << nl;
    return 0;
}