#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            ll lft = l - a[i];
            ll rgt = r-a[i];
            auto low = lower_bound(a.begin()+i+1, a.end(), lft);
            auto upr = upper_bound(a.begin()+i+1, a.end(), rgt);
            ans += (upr - low);
        }
        cout << ans << "\n";
    }
    return 0;
}