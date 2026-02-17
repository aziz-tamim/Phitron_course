// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 4005;
vector<int> a[maxN];
string s;
int ans;
pair<int,int> dfs(int u)
{
    int x=0, y=0;
    if(s[u-1] == 'B')
        x++;
    else
        y++;
    for(int z : a[u])
    {
        pair<int,int> p = dfs(z);
        x += p.first;
        y += p.second;
    }
    if(x == y)
        ans++;
    return {x,y};
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
        for(int i=1; i<=n; i++)
            a[i].clear();
        vector<int> par(n+1);
        for(int i=2; i<=n; i++)
        {
            cin >> par[i];
            a[par[i]].push_back(i);
        }
        cin >> s;
        ans=0;
        dfs(1);
        cout << ans << nl;
    }
    return 0;
}