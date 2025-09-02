#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,e;
    cin >> n >> e;

    vector<vector<pair<int,int>>> adj_list(n+1);
    vector<int> dis(n+1, INT_MAX);
    vector<int> parent(n+1, -1);

    while(e--) {
        int a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dis[1] = 0;
    pq.push({0,1});

    while(!pq.empty()) {
        auto par = pq.top();
            pq.pop();
        int par_node = par.second;
        int par_dis = par.first;

        if(par_dis > dis[par_node])
            continue;

        for(auto child : adj_list[par_node]) {
            int child_node = child.first;
            int child_dis = child.second;

            if(par_dis + child_dis < dis[child_node]) {
                dis[child_node] = par_dis + child_dis;
                parent[child_node] = par_node;
                pq.push({dis[child_node], child_node});
            }
        }
    }

    if(dis[n] == INT_MAX) {
        cout << -1 << endl;
    } else {
        vector<int> path;
        for(int v = n; v != -1; v = parent[v])
            path.push_back(v);
        reverse(path.begin(), path.end());
        for(int x : path)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
