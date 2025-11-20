#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
    return a / __gcd(a, b)* b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b;
        cin >> a >>b;
        ll ans = LLONG_MAX;

        ans = min(ans, lcm(a, 1LL)- __gcd(b, 1LL));
        ans = min(ans, lcm(a, b) - __gcd(b, b));
        ans = min(ans, lcm(a, a) - __gcd(b, a));
        cout << ans << "\n";
    }
}
