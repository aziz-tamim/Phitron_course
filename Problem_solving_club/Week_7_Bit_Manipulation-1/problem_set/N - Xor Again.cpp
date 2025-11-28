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
        int n;
        cin >> n;
        ll x = 0;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            x ^= a;
        }
        ll ans = x * 2;
        cout << ans << '\n';
    }
    return 0;
}