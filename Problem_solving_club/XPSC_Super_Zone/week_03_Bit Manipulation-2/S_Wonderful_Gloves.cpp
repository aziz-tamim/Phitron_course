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
        int n, m;
        cin >> n >> m;
        vector<ll> l(n), r(n);
        for(int i = 0; i<n; i++)
            cin >> l[i];
        for(int i=0; i<n; i++) 
            cin >> r[i];
            
        vector<ll> lft(n), rigt(n);
        for(int i=0; i< n; i++)
        {
            rigt[i] = min(l[i], r[i]);
            lft[i] = max(l[i], r[i]);
        }
        sort(rigt.begin(), rigt.end(), greater<ll>());
        ll ans = 0;
        for(int i=0; i<n; i++)
            ans += lft[i];
        for(int i=0; i< m-1; i++)
            ans += rigt[i];
        ans += 1;
        cout << ans << "\n";
    }
    return 0;
}