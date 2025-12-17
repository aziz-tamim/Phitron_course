#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<pair<ll,ll>> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());

    ll time = 0, ans = 0;
    for(int i=0; i<n; i++)
    {
        time += a[i].first;
        ans += a[i].second - time;
    }
    cout << ans << "\n";
    return 0;
}