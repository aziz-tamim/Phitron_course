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
//         int a,b;
//         cin >> a >> b;
//         vector<int> arr(a);
//         for(int i=0; i<a; i++)
//             cin >> arr[i];
//         int cnt = 0;
//         int bdg = 0;
//         for(int i=0; i<a; i++)
//         {
//             if(arr[i]>= b)
//             {
//                 cnt++;
//                 bdg += arr[i]-b;
//             }
//         }
//         for(int i=0; i<a; i++)
//         {
//             if(arr[i] < b)
//             {
//                 int some = b - arr[i];
//                 if(bdg >= some)
//                 {
//                     bdg -= some;
//                     cnt++;
//                 }
//             }
//         }
//         cout << cnt << '\n';
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, b;
        cin >> n >> b;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int cnt = 0;
        long long bdg = 0;
        vector<int> low;

        // first pass
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= b)
            {
                cnt++;
                bdg += arr[i] - b;
            }
            else
            {
                low.push_back(arr[i]);
            }
        }
        sort(low.begin(), low.end());
        for (int x : low)
        {
            int need = b - x;
            if (bdg >= need)
            {
                bdg -= need;
                cnt++;
            }
            else
                break;
        }

        cout << cnt << '\n';
    }
    return 0;
}
