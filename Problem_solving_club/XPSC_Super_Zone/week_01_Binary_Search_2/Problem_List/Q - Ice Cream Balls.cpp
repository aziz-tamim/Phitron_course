#include <bits/stdc++.h>
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
        ll n;
        cin >> n;
        auto ok = [&](ll k)
        {
            ll val = k*(k-1)/2;
            return val <= n;
        };
        ll l = 1, r = 2e9, ans = r;
        while(l <= r)
        {
            ll mid = (l+r)/2;
            if(ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid-1;
        }
        ll finalans = ans + n-(ans*(ans -1)) / 2;
        cout << finalans << "\n";
    }
    return 0;
}
