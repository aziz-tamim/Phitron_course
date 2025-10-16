// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     for(int i=0; i<tc; i++)
//     {
//         int n;
//         cin >> n;
//         string a , b;
//         cin >> a >> b;

//         bool passpos = true;
//         bool passswp = false;

//         for(int i=0; i<n; i++)
//         {
//             if(a[i] == b[i])
//             {
//                 if(a[i] == '1' && passswp == false)
//                 {
//                     passpos = false;
//                     break;
//                 }
//             }
//             else
//                 passswp = true;
//         }
//         if(passpos)
//             cout << "YES" << '\n';
//         else
//             cout << "NO" << '\n';
//     }
//     return 0;
// }

