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

    int l;
    cin >> l;

    vector<int> level(n, -1);
    queue<int> q;
    q.push(0);
    level[0] = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v : adj_list[u])
        {
            if(level[v] == -1)
            {
                level[v] = level[u] + 1;
                q.push(v);
            }
        }

    }

    vector<int> nodes;
    for(int i = 0; i<n; i++)
    {
        if(level[i] == l)
            nodes.push_back(i);
    }
    sort(nodes.begin(), nodes.end(), greater<int>());
    for(int x : nodes)
        cout << x << " ";
    cout << "\n";
    return 0;
}