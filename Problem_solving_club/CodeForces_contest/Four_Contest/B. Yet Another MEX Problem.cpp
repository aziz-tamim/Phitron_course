// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<int> a(n);
//         int mx = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             mx = max(mx, a[i]);
//         }

//         vector<int> freq(mx + 2, 0);
//         for (int x : a)
//             freq[x]++;

//         int del = n - k + 1; // total deletions
//         int mex = 0;
//         for (int x = 0;; x++)
//         {
//             if (freq[x] <= del)
//             {
//                 del -= freq[x];
//             }
//             else
//             {
//                 mex = x;
//                 break;
//             }
//         }
//         cout << mex << "\n";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        set<int> st;
        int need=n-k+1;
        int hoyeche=0,nai=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(st.count(x))
                hoyeche++;
            else
                st.insert(x);
        }
        for(int i=hoyeche;i<need;i++)
        {
            if(!st.empty())
            {
                st.erase(*st.rbegin());
            }
        }
        int cnt=0;
        for(auto val:st)
        {
            if(cnt!=val)
            {
                nai=val;
                break;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}