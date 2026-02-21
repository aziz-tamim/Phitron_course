// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 2e5+5;
vector<int> g[maxN];
int arr[maxN];
int dfs(int x, int par)
{
    int cnt = 0;
    bool leaf = true;
    for(auto v : g[x])
    {
        if(v == par)
            continue;
        cnt += dfs(v, x);
        leaf = false;
    }
    if(leaf)
        arr[x] = 1;
    else
        arr[x] = cnt;
    return arr[x];
}
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
        for(int i=0; i<=n; i++)
            g[i] = vector<int>();
        for(int i=1; i<n; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(1, 0);
        int q;
        cin >> q;
        while(q--)
        {
            int x, y;
            cin >> x >> y;
            cout << 1LL * arr[x]*arr[y] << nl;
        }
    }
    return 0;
}