#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<int> leaf;

int dfs(int u){
    if(tree[u].empty())
        return leaf[u] = 1;
    int cnt = 0;
    for(int v : tree[u]) cnt += dfs(v);
    return leaf[u] = cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        tree.assign(n+1, {});
        leaf.assign(n+1, 0);

        for(int i=0;i<n-1;i++){
            int u,v; cin >> u >> v;
            tree[u].push_back(v); 
        }

        dfs(1);

        int q; cin >> q;
        while(q--){
            int x,y; cin >> x >> y;
            cout << 1LL * leaf[x] * leaf[y] << "\n";
        }
    }
}