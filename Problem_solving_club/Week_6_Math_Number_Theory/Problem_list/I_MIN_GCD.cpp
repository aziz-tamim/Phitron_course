#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll mn = a[0];
        ll g =0;
        for(ll i=1; i<n; i++)
        {
            if(a[i]%mn == 0)
                g = gcd(g,a[i]);
        }
        if(g == mn)
            cout << "Yes" << "\n";
        else
            cout << "No" << '\n';
    }
    return 0;
}