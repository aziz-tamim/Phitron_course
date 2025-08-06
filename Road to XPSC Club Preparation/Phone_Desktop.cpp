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


#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    // cin.ignore();
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int res = (y + 1) / 2;

        int cell = res * 15;
        int ccupied = y * 4;

        x -= (cell - ccupied);

        if (x < 0)
        {
            x = 0;
        }

        res += (x + 14) / 15;

        cout << res << endl;
    }

    return 0;
}