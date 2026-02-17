// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,m;
        cin >> n >> m;
        map<int, set<int>> g;
        for(int i=1; i<=m; i++)
        {
            int u,v;
            cin >> u >> v;
            g[u].insert(v);
            g[v].insert(u);
        }
        int leaf = -1, parentOfLeaf = -1;
        for(int i=1; i<=n; i++)
        {
            if(g[i].size() == 1)
            {
                leaf = i;
                break;
            }
        }
        int x,y;
        for(int i=1; i<=n; i++)
        {
            if(g[i].find(leaf) != g[i].end())
            {
                y = g[i].size()-1;
                parentOfLeaf = i;
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(g[i].find(parentOfLeaf) != g[i].end() && g[i].size() > 1)
            {
                x = g[i].size();
                break;
            }
        }
        cout << x << sp << y << nl;
    }
    return 0;
}