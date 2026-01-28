// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
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
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        // Regret Greedy Approch
        ll ans = 0;
        multiset<ll, greater<ll>> ms; 
        for(int i=n-1; i>=0; i--)
        {
            // cost can be used 2 times
            ms.insert(a[i]);
            ms.insert(a[i]);
            // sell
            ll mx = *ms.begin();
            ans += mx;
            ms.erase(ms.begin());
        }
        cout << ans << "\n";
    }
    return 0;
}