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
    sort(a.begin(), a.end());

    ll ans = 1;
    for(int i=0; i<n; i++)
    {
        if(a[i] > ans)
            break;
        ans += a[i];
    }
    cout << ans << "\n";
    return 0;
}