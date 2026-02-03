// // AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
// #include<bits/stdc++.h>
// using namespace std;
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
//         vector<int> arr(n);
//         for(int i=0; i<n; i++)
//             cin >> arr[i];
//         int cnt[10];
//         memset(cnt, 0, sizeof(cnt));
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<10; j++)
//             {
//                 if((arr[i] >> j) & 1)
//                     cnt[j]++;
//             }
//         }
//         int ans = 0;
//         for(int j=0; j<10; j++)
//         {
//             if(cnt[j] > 0)
//                 ans |= (1 << j);
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
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
        int mxvlu = 0;
        int mnvlu = (1 << 10)-1;
        for(int i=0; i < n; i++)
        {
            int x;
            cin >> x;
            mxvlu |= x;
            mnvlu &= x;
        }
        int ans = mxvlu - mnvlu;
        cout << ans << "\n";
    }
    return 0;
}
