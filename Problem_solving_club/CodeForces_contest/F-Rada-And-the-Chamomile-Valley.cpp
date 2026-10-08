#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
struct Edge {
    int u, v;
};

int n, m;
vector<Edge> edges;
vector<vector<pair<int, int>>> adj;

vector<int> tin, low;
vector<bool> required;
int timer;

bool dfs(int u, int parentEdge) {
    tin[u] = low[u] = ++timer;
    bool hasN = (u == n);
    for (auto [v, id] : adj[u]) {
        if (id == parentEdge)
            continue;

        if (tin[v]) {
            low[u] = min(low[u], tin[v]);
        }
        else {
            bool childHasN = dfs(v, id);

            low[u] = min(low[u], low[v]);
            if (low[v] > tin[u]) {

                if (childHasN)
                    required[id] = true;
            }
            if (childHasN)
                hasN = true;
        }
    }
    return hasN;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while(tc--)
    {
        cin >> n >> m;
        edges.assign(m + 1, {});
        adj.assign(n + 1, {});

        for (int i = 1; i <= m; i++) {
            int u, v;
            cin >> u >> v;

            edges[i] = {u, v};

            adj[u].push_back({v, i});
            adj[v].push_back({u, i});
        }

        tin.assign(n + 1, 0);
        low.assign(n + 1, 0);
        required.assign(m + 1, false);

        timer = 0;

        dfs(1, -1);

        vector<int> dist(n + 1, INF);
        vector<int> bestEdge(n + 1, INF);

        using State = tuple<int, int, int>;
        priority_queue<State, vector<State>, greater<State>> pq;

        for (int id = 1; id <= m; id++) {
            if (!required[id])
                continue;

            auto [u, v] = edges[id];

            if (dist[u] > 0 ||
                (dist[u] == 0 && id < bestEdge[u])) 
            {

                dist[u] = 0;
                bestEdge[u] = id;
                pq.push({0, id, u});
            }

            if (dist[v] > 0 ||
                (dist[v] == 0 && id < bestEdge[v])) {

                dist[v] = 0;
                bestEdge[v] = id;
                pq.push({0, id, v});
            }
        }

        while (!pq.empty()) {
            auto [d, eid, u] = pq.top();
            pq.pop();

            if (d != dist[u] || eid != bestEdge[u])
                continue;

            for (auto [v, id] : adj[u])
            {
                int nd = d + 1;
                if (nd < dist[v] ||
                    (nd == dist[v] && eid < bestEdge[v]))
                {
                    dist[v] = nd;
                    bestEdge[v] = eid;

                    pq.push({nd, eid, v});
                }
            }
        }

        int q;
        cin >> q;

        while (q--)
        {
            int v;
            cin >> v;

            cout << (bestEdge[v] == INF ? -1 : bestEdge[v]) << ' ';
        }
        cout << '\n';
    }
}