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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        auto ok = [&](int mid)
        {
            multiset<int> s;
            for(int i=0; i<n; i++)
                s.insert(arr[i]);
            for(int i=1; i<=mid; i++)
            {
                int prjn = mid - i+1;
                auto it = s.upper_bound(prjn);
                if(it == s.begin())
                    return false;
                it--;
                s.erase(it);
                if(s.empty() == false)
                {
                    int val = *s.begin();
                    s.erase(s.begin());
                    s.insert(val + prjn);
                }
            }
            return true;
        };
        int l=0, r=n, ans =0;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(ok(mid))
            {
                ans = mid;
                l = mid+1;
            }
            else
                r = mid - 1;
        }
        cout << ans << "\n";
    }
    return 0;
}