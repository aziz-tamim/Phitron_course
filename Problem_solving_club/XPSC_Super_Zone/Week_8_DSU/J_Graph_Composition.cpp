// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
struct DSU
{
    vector<int> par, rnk, siz;
    int c;
    DSU(int n) : par(n+1,-1), rnk(n+1,0), siz(n+1,1), c(n)
    {
        for(int i=1; i<=n; i++)
            par[i] = i;
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
        if((u = find(u)) == (v = find(v)))
            return;
        else
            c--;
        if(rnk[u] > rnk[v])
            swap(u,v);
        else if(rnk[u] == rnk[v])
            rnk[v]++;
        par[u] = par[v];
        siz[v] += siz[u];
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m1, m2;
        cin >> n >> m1 >> m2;
        vector<pair<int,int>> arr(m1);
        for(int i=0; i<m1; i++)
            cin >> arr[i].first >> arr[i].second;
        DSU diff(n);

        for(int i=0; i<m2; i++)
        {
            int u,v;
            cin >> u >> v;
            diff.merge(u,v);
        }
        int remv = 0;
        DSU f(n);
        for(auto [u,v] : arr)
        {
            if(diff.same(u,v) == false)
                remv++;
            else
                f.merge(u,v);
        }
        map<int,set<int>> cmp;
        for(int i=1; i<=n; i++)
        {
            int fst = diff.find(i);
            int scnd = f.find(i);
            cmp[fst].insert(scnd);
        }
        int add = 0;
        for(auto &x : cmp)
        {
            add += (x.second.size()-1);
        }
        cout << remv + add << nl;
    }
    return 0;
}