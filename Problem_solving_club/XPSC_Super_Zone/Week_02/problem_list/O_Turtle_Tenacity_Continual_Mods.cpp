#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    map<ll,ll> mp;
    ll mn = LLONG_MAX;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        mn = min(mn, arr[i]);
    }
    bool ok = false;
    if(mp[mn] == 1)
        ok = true;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i] %mn != 0)
            {
                ok = true;
                // break;
            }
        }
    }
    if(ok)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
