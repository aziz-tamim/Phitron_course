// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e5+5;
vector<int> a[maxN];
int n,ans = 0;
int dfs(int x, int par)
{
    int total = 1;
    int minTotal = 0;
    for(int z : a[x])
    {
        if(z == par)
            continue;
        minTotal = dfs(z,x);
        if(minTotal%2 == 0)
            ans++;
        else
            total += minTotal;
    }
    return total;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    if(n%2 != 0)
    {
        cout << -1 << nl;
        return 0;
    }
    for(int i=1; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1,0);
    cout << ans << nl;
    return 0;
}
