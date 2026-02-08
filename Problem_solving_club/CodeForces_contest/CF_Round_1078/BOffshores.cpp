// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        ll x, y;
        cin >> n >>x >> y;
        vector<ll> arr(n);
        ll sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum += arr[i]/x;
        }
        ll ans = 0;
        for(int i = 0; i < n; i++)
        {
            ll diff = sum - arr[i]/x;
            ll curr = arr[i] + diff * y;
            ans = max(ans, curr);
        }
        cout << ans << nl;
    }
    return 0;
}
