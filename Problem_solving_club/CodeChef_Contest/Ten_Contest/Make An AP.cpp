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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n <= 2)
        {
            cout << 0 << "\n";
            continue;
        }
        ll vinno = 0;
        for (int i = 1; i < n; i++)
        {
            ll diff = arr[i] - arr[i - 1];
            if (i == 1)
                vinno = diff;
            else
                vinno = __gcd(vinno, diff);
        }
        ll sum = (arr[n - 1] - arr[0]) / vinno + 1;
        ll ans = sum - n;
        cout << ans << "\n";
    }
    return 0;
}
