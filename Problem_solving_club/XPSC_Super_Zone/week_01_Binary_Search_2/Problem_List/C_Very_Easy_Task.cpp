#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x,y,z;
    cin >> x >> y >> z;
    ll fst = min(y,z);
    auto ok = [&](ll mid)
    {
        ll all = (mid/y) + (mid/z);
        return all >= (x-1);
    };
    ll l=0, r= 1e18, ans = 0;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans + fst << "\n";
    return 0;
}