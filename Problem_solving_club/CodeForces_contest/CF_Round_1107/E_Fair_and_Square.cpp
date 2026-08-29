// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "

bool isPerfectSquare(ll x)
{
    ll r = (ll)sqrtl((long double)x);
    while(r*r > x)
        r--;
    while((r+1)*(r+1)<= x)
        r++;
    return r*r == x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<ll> a(n+1);
        for(int i=1; i<=n; i++)
            cin >> a[i];
        
        vector<vector<int>> adj(n+1);
        for(int i=0; i<n-1; i++)
        {
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> parent(n+1, 0), order;
        order.reserve(n);
        vector<bool> vis(n+1, false);
        queue<int> q;
        q.push(1); vis[1] = true;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            order.push_back(u);
            for(int v: adj[u]){
                if(!vis[v]){
                    vis[v] = true;
                    parent[v] = u;
                    q.push(v);
                }
            }
        }
        vector<ll> sz(n+1, 1), s2(n+1,1), s3(n+1, 1);
        for(int i=(int)order.size()-1; i>=0; i--){
            int v = order[i];
            int p = parent[v];
            if(p!= 0)
            {
                s2[p] += sz[v]*sz[v];
                s3[p] += sz[v]*sz[v]*sz[v];
                sz[p] += sz[v];
            }
        }
        for(int v=2; v<=n; v++)
        {
            ll up = n-sz[v];
            s2[v] += up*up;
            s3[v] += up*up*up;
        }
        ll ans = 0, N = n;
        for(int m=1; m<=n; m++)
        {
            if(!isPerfectSquare(a[m]))
                continue;
            ll e3 = (N*N*N - 3*N*s2[m] + 2*s3[m]) / 6;
            ans += e3;
        }
        cout << ans << nl;
    }
    
    return 0;
}