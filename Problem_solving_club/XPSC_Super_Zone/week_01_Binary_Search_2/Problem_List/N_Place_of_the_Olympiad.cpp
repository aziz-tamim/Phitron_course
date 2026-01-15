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
        int n,m,k;
        cin >> n >> m >> k;

        auto ok = [&](ll bnclen)
        {
            ll bnc = bnclen+1;
            ll allbcn = m/bnc;
            ll west = allbcn*bnclen;
            ll baki = m % bnc;
            west += min(baki, bnclen);
            return west * n >= k;
        };

        ll l =1, r=m, ans = m;
        while(l<=r)
        {
            ll mid = (l+r)/2;
            if(ok(mid))
            {
                ans = mid;
                r = mid -1;
            }
            else
                l = mid+1;
        }
        cout << ans << "\n";
    }
    return 0;
}
