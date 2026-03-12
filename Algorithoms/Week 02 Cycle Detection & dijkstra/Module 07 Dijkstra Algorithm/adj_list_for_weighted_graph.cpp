// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin >> n >> e;
    vector<pair<int,int>> adj_list[n];
    while(e--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    for(int i=0; i<n; i++)
    {
        cout << i << " -> ";
        for(auto p : adj_list[i])
            cout << p.first << sp << p.second << ", ";
        cout << nl;
    }
    return 0;
}