#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll mx = *max_element(a.begin(), a.end());
    ll x = 0;
    for(int i=0; i<n; i++)
    {
        ll diff = mx - a[i];
        if(diff>0)
            x = __gcd(x,diff);
    }
    ll y = 0;
    for(int i=0; i<n; i++)
        y+= (mx- a[i])/x;
    cout << y << " " << x << '\n';
    return 0;
}