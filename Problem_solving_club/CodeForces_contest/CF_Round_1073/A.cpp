// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
bool ok(vector<int> &v, vector<int> &mp, int n)
{
    for(int i=1; i<n; i++)
    {
        if(mp[v[i]] == mp[v[i-1]])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
        cin >> v[i];
    vector<int> mp(n+1);
    for(int i=1, j=0; i<=n; i++, j^=1)
        mp[i] = j;
    if(ok(v,mp,n))
    {
        cout << "YES" << "\n";
        return;
    }
    for(int i=1, j=1; i<=n; i++, j^=1)
        mp[i] = j;
    if(ok(v,mp,n))
    {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}
