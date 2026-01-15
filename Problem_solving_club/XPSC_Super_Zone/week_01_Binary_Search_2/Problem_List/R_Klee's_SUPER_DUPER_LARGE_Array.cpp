#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n, m;
        cin >> n >> m;
        ll all = n * m + n * (n-1) / 2;
        auto ok = [&](ll mid)
        {
            ll prefix = mid * m + mid * (mid - 1)/2;
            return abs(2 * prefix - all);
        };

        ll l = 1, r = n, ans = LLONG_MAX;
        while (l <= r)
        {
            ll mid = (l+r) / 2;
            ll diff = ok(mid);
            ll left, right;
            if (mid > 1)
                left = ok(mid-1);
            else
                left = diff;
    
            if (mid < n)
                right = ok(mid + 1);
            else
                right = diff;

            ans = min({ans, diff, left, right});

            if (left < diff)
                r = mid- 1;
            else if (right < diff)
                l = mid + 1;
            else
                break;
        }
        cout << ans << "\n";
    }
    return 0;
}
