// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
struct DSU
{
    vector<int> par, rnk, siz, mini, maxi;
    int c;
    DSU(int n) : par(n+1,-1), rnk(n+1,0), siz(n+1,1), c(n), mini(n+1,-1), maxi(n+1,-1)
    {
        for(int i=1; i<=n; i++)
        {
            par[i] = i;
            mini[i] = maxi[i] = i;
        }
    }
    int find(int i)
    {
        return (par[i] == i ? i : (par[i] = find(par[i])));
    }
    bool same(int u, int v)
    {
        return find(u) == find(v);
    }
    int getSize(int u)
    {
        return siz[find(u)];
    }
    int cnt()
    {
        return c;
    }
    void merge(int u, int v)
    {
        if((u = find(u)) == (v=find(v)))
            return;
        c--;
        if(rnk[u] > rnk[v])
            swap(u,v);
        else if(rnk[u] == rnk[v])
            rnk[v]++;
        par[u] = par[v];
        siz[v] += siz[u];
        mini[v] = min(mini[u], mini[v]);
        maxi[v] = max(maxi[u], maxi[v]);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    DSU s1(n), s2(n);
    for(int i=0; i<m1; i++)
    {
        int u,v;
        cin >> u >> v;
        s1.merge(u,v);
    }
    for(int i=0; i<m2; i++)
    {
        int u,v;
        cin >> u >> v;
        s2.merge(u,v);
    }
    vector<pair<int,int>> ans;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1;j<=n; j++)
        {
            if(s1.same(i,j) == false && s2.same(i,j) == false)
            {
                ans.push_back({i,j});
                s1.merge(i,j);
                s2.merge(i,j);
            }
        }
    }
    cout << ans.size() << nl;
    for(auto &x : ans)
    {
        cout<< x.first << sp << x.second << nl;
    }
    return 0;
}