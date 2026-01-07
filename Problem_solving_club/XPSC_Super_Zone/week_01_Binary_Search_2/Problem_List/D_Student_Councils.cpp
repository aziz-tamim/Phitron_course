#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,n;
    cin >> m >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    auto ok = [&](ll mid)
    {
        ll all = 0;
        for(int i=0; i<n; i++)
        {
            all += min(a[i],mid);
        }
        return all >= mid*m;
    };

    ll l=0, r = 1e18, ans = 0;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid+1;
        }   
        else
            r = mid-1;
    }
    cout << ans << "\n";
    return 0;
}



