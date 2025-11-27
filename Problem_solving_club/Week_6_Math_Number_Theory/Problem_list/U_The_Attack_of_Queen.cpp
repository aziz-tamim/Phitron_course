#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll lfs = y - 1;
        ll rgs = n - y;
        ll ups = x - 1;
        ll dns = n - x;

        ll upl = min(x - 1, y - 1);
        ll upr = min(x - 1, n - y);
        ll dnl = min(n - x, y - 1);
        ll dnr = min(n - x, n - y);

        ll ans = lfs + rgs + ups + dns + upl + upr + dnl + dnr;
        cout << ans << '\n';
    }
    return 0;
}