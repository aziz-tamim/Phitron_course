// problem link --> https://codeforces.com/problemset/problem/1974/A
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int x,y;
//         cin >> x >> y;
//         int count = 0;
//         if(y != 0)
//         {
//             count += ceil((y * 4) / 8.0);
//             int t = count * 15 - y * 4;
//             if(x > t)
//             {
//                 x = x - t;
//                 count += ceil(x / 15.0);
//             }
//         }
//         else
//         {
//             count += ceil(x / 15.0);
//         }
//         cout << count << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int screen = y/2;
        int baki = screen * 7;
        if(y%2 != 0)
        {
            screen++;
            baki += 11;
        }
        if(x > baki)
        {
            x -= baki;
            screen += x/15;
            if(x%15 != 0)
                screen++;
        }
        cout << screen << endl;
    }
    return 0;
}