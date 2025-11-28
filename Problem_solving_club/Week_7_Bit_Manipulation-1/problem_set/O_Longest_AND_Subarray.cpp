#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll x = 1;
        while (x*2 <= n)
            x = x*2;

        ll x1 = n-x +1;
        ll lmt = (n+1) /2;
        ll x2 = 1;
        while (x2 * 2 <= lmt)
            x2 *= 2;

        cout << max(x1, x2) << '\n';
    }
    return 0;
}
