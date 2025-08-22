#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int l;
        cin >> l;
        if(!adj_list[l].empty())
        {
            sort(adj_list[l].begin(),adj_list[l].end(),greater<int>());
            for(int x : adj_list[l])
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << "\n";
    }
    return 0;
}