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
        ll n,m;
        cin >> n >> m;
        vector<int> arr(n);
        for(int i=0;i<n; i++)
            cin >> arr[i];
        ll l = 1 , r = *max_element(arr.begin(),arr.end())+m, ans =1;
        auto ok = [&](ll mid)
        {
            ll x = 0;
            for(int i=0; i<n; i++)
            {
                if(mid > arr[i])
                    x+= (mid-arr[i]);
            }
            return x;
        };
        while(l<=r)
        {
            ll mid = (l+r)/2;
            if(ok(mid)<=m)
            {
                ans = mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        cout << ans << "\n";
    }
    return 0;
}