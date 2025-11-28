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
        vector<int> a(n);
        int mx = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            mx = max(mx,a[i]);
        }
        vector<int> cnt(mx+2,0);
        int ans=0;
        int mex=0;
        for(int i=0;i<n; i++)
        {
            cnt[a[i]]++;
            while(cnt[mex]>0)
                mex++;

            if(mex>0)
            {
                ans++;
                fill(cnt.begin(), cnt.end(),0);
                mex=0;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}