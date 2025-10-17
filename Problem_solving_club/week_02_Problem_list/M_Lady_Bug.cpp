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

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        int n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;
        int x = 0;
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                y += str1[i] == '0';
                x += str2[i] == '0';
            }
            else
            {
                x += str1[i] == '0';
                y += str2[i] == '0';
            }
        }
        int ans = (n + 1) / 2;
        int res = n / 2;
        if (x >= ans && y >= res)
            cout << "YES" << "\n";

        else
            cout << "NO" << "\n";
    }
    
    return 0;
}