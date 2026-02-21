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
//         vector<int> p(n), a(n);
//         for(int i=0; i<n; i++)
//             cin >> p[i];
//         for(int i=0; i<n; i++)
//             cin >> a[i];
//         bool ok = true;
//         if(a[0] != p[0])
//             ok = false;
//         for(int i=1; i<n && ok; i++)
//         {
//             if(a[i] != p[i] && a[i] != a[i-1])
//                 ok = false;
//         }
//         if(ok)
//             cout << "YES" << nl;
//         else
//             cout << "NO" << nl;
//     }
//     return 0;
// }

// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

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

        vector<int> p(n), a(n);
        for(int i=0; i<n; i++) cin >> p[i];
        for(int i=0; i<n; i++) cin >> a[i];

        bool ok = true;

        for(int i = 0; i < n; i++)
        {
            if(a[i] == p[i]) continue;

            bool possible = false;

            if(i > 0 && a[i] == a[i-1])
                possible = true;

            if(i < n-1 && a[i] == a[i+1])
                possible = true;

            if(!possible)
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << nl;
    }

    return 0;
}