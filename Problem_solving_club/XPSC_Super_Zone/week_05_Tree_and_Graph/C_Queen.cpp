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
    int n,root;
    cin >> n;
    vector<int> g[n+1], bad(n+1), a(n+1);
    for(int i=1; i<=n; i++)
    {
        int p,c;
        cin >> p >> c;
        int u = p, v=i;
        if(u!=-1)
            g[u].push_back(v);
        else
            root = i;
        if(c == 1) {
            bad[u]++;
            a[v] = 1;
        }
    }
    vector<int> ans;
    for(int i=1; i<=n; i++)
    {
        if(root == i)
            continue;
        if(g[i].size() == bad[i] && a[i] == 1)
            ans.push_back(i);
    }
    if(ans.empty())
        cout << -1 << nl;
    else
    {
        for(int i=0; i<ans.size();i++)
            cout << ans[i] << sp;
        cout << nl;
    }
        
    return 0;
}