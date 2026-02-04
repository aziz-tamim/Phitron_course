// // AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl "\n"
// #define sp " "
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
//         string str;
//         cin >> str;
//         int mxA =0, mxB =0;
//         int fst = false;
//         for(int i=0; i<n; i++)
//         {
//             if(str[i] == 'A')
//             {
//                 mxA = max(mxA, i+1);
//                 if(i+1 == 1)
//                     fst = true;
//             }
//             else
//                 mxB = max(mxB, i+1);
//         }
//         if(mxA > mxB)
//             cout << "Alice" << nl;
//         else if(mxB > mxA)
//             cout << "Bob" << nl;
//         else
//         {
//             if(fst)
//                 cout << "Alice" << nl;
//             else
//                 cout << "Bob" << nl;
//         }
        
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int maxA = 0, maxB = 0;
        bool Ahas1 = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                maxA = max(maxA, i + 1);
                if (i + 1 == 1) Ahas1 = true;
            } else {
                maxB = max(maxB, i + 1);
            }
        }

        if (maxA > maxB) cout << "Alice\n";
        else if (maxA < maxB) cout << "Bob\n";
        else {
            if (maxA == n && Ahas1) cout << "Alice\n";
            else cout << "Bob\n";
        }
    }
}