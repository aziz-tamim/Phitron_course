#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> arr(m);
        for(int i=0; i<m; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        auto ok = [&](int mid)
        {
            int str = 0, t=0;
            for(int i=m-1; i>=m-mid; i--)
            {
                if(arr[i]>t)
                {
                    t += n-arr[i];
                    str++;
                }
                else
                    break;
            }
            return str== mid;
        };
        int l=0, r=m, ans = 0;
        while(l<= r)
        {
            int mid = (l+r) / 2;
            if(ok(mid))
            {
                ans = mid;
                l = mid +1;
            }
            else
                r = mid-1;
        }
        cout << ans << "\n";
    }
    return 0;
}

