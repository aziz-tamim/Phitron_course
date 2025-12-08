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

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n, cnt1 = 0, cnt2 = 0;
//         cin >> n;
//         for(int i=0; i<=n; i++)
//         {
//             int x;
//             cin >> x;
//             if(x==0)
//                 cnt1++;
//             else
//                 cnt2++;
//         }
//         cout << max(cnt1, cnt2) << '\n';
//     }
//     return 0;
// }