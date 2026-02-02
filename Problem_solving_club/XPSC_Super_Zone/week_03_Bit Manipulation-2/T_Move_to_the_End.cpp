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
        vector<ll> suff(n+1, 0);
        vector<ll> lft(n,-1);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(i == 0)
                lft[i] = arr[i];
            else
                lft[i] = max(lft[i-1], arr[i]);
        }
        for(int i = n-1; i>=0; i--)
        {
            suff[i] = suff[i+1] + arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            ll idx = n-1-i;
            ll sum = suff[idx];
            ll curr = arr[idx];
 
            if(idx > 0 && curr < lft[idx-1])
                sum = sum - curr+lft[idx-1];
            cout << sum << " ";
        }
        cout << "\n";
    }
    return 0;
}
