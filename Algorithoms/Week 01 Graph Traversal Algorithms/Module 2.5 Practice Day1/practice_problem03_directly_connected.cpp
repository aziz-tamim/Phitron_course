#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e; // node edge input
    cin >> n >> e;
    vector<int> adj_list[n];

    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int l;
    cin >> l;
    cout << adj_list[l].size() << endl;
    return 0;
}