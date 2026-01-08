#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >>m;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    auto ok = [&](int mid)
    {
        int cnt = 1, shesh = a[0];
        for(int i=1; i<n; i++)
        {
            if(a[i]-shesh >= mid)
            {
                cnt++;
                shesh = a[i];
            }
        }
        return cnt >= m;
    };
    int l = 0, r= 1e9, ans = 0;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << "\n";
    return 0;
}