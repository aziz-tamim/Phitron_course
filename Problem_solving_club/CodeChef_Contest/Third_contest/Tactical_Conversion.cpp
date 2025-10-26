// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int Tc;
//     cin >> Tc;
//     while (Tc--)
//     {
//         int N;
//         string S;
//         cin >> N >> S;
//         bool possible = true;
//         int lastOp = -2;
//         for (int i = 0; i < N; i++)
//         {
//             if (S[i] == '1')
//             {
//                 if (i-lastOp > 1)
//                 {
//                     lastOp = i;
//                 }
//                 else
//                 {
//                     possible = false;
//                     break;
//                 }
//             }
//         }
//         cout << (possible ? "Yes\n" : "No\n");
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one = 0;
        int length = 0, maxlength = 0; // 1 er length, 1 er maxlength
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
                length++;
                maxlength = max(length, maxlength);
                // cout << i << " " << one << " " << length << " " << maxlength << endl;
            }
            else
                length = 0;
        }
        if (one == 2 && maxlength == 2)
            cout << "No" << "\n";
        else if (one == 3 && maxlength == 3)
            cout << "No" << "\n";
        else
            cout << "Yes" << '\n';
    }
    return 0;
}