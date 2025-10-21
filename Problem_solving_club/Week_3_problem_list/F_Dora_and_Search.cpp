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
//         int l=-1, r = -1;
//         for(int i=1; i<n-1; i++)
//         {
//             int x = arr[i-1], y = arr[i], z = arr[i+1];
//             int minimum = min({x,y,z});
//             int maximum = max({x,y,z});

//             if(y != minimum && y!=maximum)
//             {
//                 l = i;
//                 r = i+2;
//                 break;
//             }
//         }
//         if(l == -1)
//             cout << -1 << "\n";
//         else
//             cout << l << " " << r << "\n";
//     }
//     return 0;
// }
