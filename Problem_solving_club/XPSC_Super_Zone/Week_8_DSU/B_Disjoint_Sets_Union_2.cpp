// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
struct DSU{
    
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    DSU D(n);
    for(int i=1; i<=m; i++)
    {
        int query;
        cin >> query;
        if(query == "union")
        {
            int u,v;
            cin >> u >> v;
            D.merge(u,v);
        }
        else
        {
            int v;
            cin >> v;
        }
    }
    return 0;
}