// // AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         int n;
//         cin >> n;
//         vector<ll> arr(n);
//         for(int i=0; i<n; i++)
//             cin >> arr[i];
//         ll suff = 0;
//         ll lft = LLONG_MIN;

//         for(int i=1; i<=n; i++)
//         {
//             int curr = n-i;
//             suff += arr[curr];
//             if(curr-1 >= 0)
//                 lft = max(lft, arr[curr-1]);
//             ll ans = suff;
//             if(i<n && lft != LLONG_MIN)
//                 ans = max(ans, suff-arr[curr]+lft);
//             cout << ans << " ";
//         }
//         cout << '\n';
//     }
//     return 0;
// }

// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
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
        vector<ll> arr(n);
        vector<ll> suff(n+1,0);
        vector<ll> pre(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(i == 0)
                pre[i] = arr[i];
            else
                pre[i] = max(pre[i-1], arr[i]);
        }
        for(int i = n-1; i>=0; i--)
        {
            suff[i] = suff[i+1] + arr[i];
        }
        for(int j =0; j<n; j++)
        {
            ll idx = n-1-j;
            ll ans = suff[idx];
            
            if(idx > 0 && arr[idx] < pre[idx-1])
                ans += pre[idx-1] - arr[idx];
            cout << ans << sp;
        }
        cout << nl;
    }
    return 0;
}
