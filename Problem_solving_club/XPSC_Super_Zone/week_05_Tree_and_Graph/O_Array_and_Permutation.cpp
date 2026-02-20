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
//         vector<int>p(n),a(n);
//         for(int i=0; i<n; i++)
//             cin >> p[i];
//         for(int i=0; i<n; i++)
//             cin >> a[i];
//         bool ok = true;
//         if(a[0] != p[0])
//             ok = false;
//         for(int i=1; i<n;i++)
//         {
//             if(a[i] == a[i-1])
//                 continue;
//             if(a[i] != p[i])
//                 ok = false;
//         }
//         if(ok)
//             cout << "YES" << nl;
//         else
//             cout << "NO" << nl;
        
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         vector<int> p(n), a(n);
//         for(int i = 0; i < n; i++) cin >> p[i];
//         for(int i = 0; i < n; i++) cin >> a[i];

//         bool ok = true;

//         int i = 0;
//         while(i < n) {
//             int j = i;
//             bool found = false;

//             // same value block
//             while(j < n && a[j] == a[i]) {
//                 if(p[j] == a[j]) found = true;
//                 j++;
//             }

//             if(!found) {
//                 ok = false;
//                 break;
//             }

//             i = j;
//         }

//         cout << (ok ? "YES\n" : "NO\n");
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> p(n), a(n);
        for(int i = 0; i < n; i++) cin >> p[i];
        for(int i = 0; i < n; i++) cin >> a[i];

        // store position of each value in p
        vector<int> pos(n + 1);
        for(int i = 0; i < n; i++)
        {
            pos[p[i]] = i;
        }
        bool ok = true;

        int i = 0;
        while(i < n) {
            int j = i;

            // find block of equal values in a
            while(j < n && a[j] == a[i]) {
                j++;
            }

            int value = a[i];
            int originalPos = pos[value];

            // original position must lie inside this block
            if(originalPos < i || originalPos >= j) {
                ok = false;
                break;
            }

            i = j;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}