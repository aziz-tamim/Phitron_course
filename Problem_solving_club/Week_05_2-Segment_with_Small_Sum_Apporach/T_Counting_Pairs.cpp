#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        ll x, y;
        cin >> n >> x >> y;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        pbds<pair<ll, int>> pr;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll down = (sum - y) - a[i];
            ll up = (sum - x) - a[i];
            ll cnt = pr.order_of_key({up + 1, -1}) - pr.order_of_key({down, -1});
            ans += cnt;
            pr.insert({a[i], i});
        }
        cout << ans << "\n";
    }
    return 0;
}
