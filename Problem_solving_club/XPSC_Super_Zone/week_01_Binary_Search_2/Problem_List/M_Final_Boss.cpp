#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool good(ll m, ll n, ll h, vector<ll> &a, vector<ll> &c)
{
    ll cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cnt = min(cnt + (1+(m-1) / c[i]) * a[i], h);
    }
    return cnt >= h;
}

void solve()
{
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), c(n);
    for(int i = 0; i<n; i++)  
        cin >> a[i];
    for(int i=0; i<n; i++)
        cin >> c[i];
    ll l = 0, r = 1;
    while(!good(r, n, h, a, c))
        r *= 2;
    while(l+1 <r)
    {
        ll m = l + (r-l) /2;
        if(good(m, n, h, a, c))
            r = m;
        else
            l = m;
    }
    cout << r << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
