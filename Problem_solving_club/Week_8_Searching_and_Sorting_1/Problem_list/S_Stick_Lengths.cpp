#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a.begin(),a.end());

    ll mid = a[n/2];
    ll ans = 0;
    for(int i=0; i<n;i++)
        ans += abs(a[i]-mid);
    cout << ans << '\n';
    return 0;
}