#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,m;
        cin >> n >>m;
        vector<ll> arr(n), arr2(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++)
            cin >> arr2[i];

        vector<ll> fre(m, 0);
        for(int i=0; i<n; i++)
        {
            int j = arr2[i] %m;
            fre[j]++;
        }
        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            int x = arr[i]%m;
            int nd = (m-x) % m;
            ans += fre[nd];
        }
        cout << ans << "\n";
    }
    return 0;
}
