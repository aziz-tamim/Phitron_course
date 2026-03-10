// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
struct DSU{
    vector<int> par, rnk, siz;
    int c;
    DSU(int n): par(n+1,-1), rnk(n+1,0), siz(n+1,1), c(n)
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
    int getsize(int u)
    {
        return siz[find(u)];
    }
    int cnt()
    {
        return c;
    }
    void merge(int u, int v)
    {
        if((u=find(u)) == (v = find(v))) {       
            return;
        }
        else {
            c--;
        }
        if(rnk[u] > rnk[v])
        {
            swap(u,v);
        }
        else if(rnk[u] == rnk[v])
        {
            rnk[v]++;
        }
        par[u] = v;
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
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++)
            cin >> arr[i];
        DSU D(n);
        for(int i=1; i<=n;i++)
            D.merge(i, arr[i]);
        for(int i=1; i<=n; i++)
            cout << D.getsize(i) << sp;
        cout << nl;
    }
    return 0;
}