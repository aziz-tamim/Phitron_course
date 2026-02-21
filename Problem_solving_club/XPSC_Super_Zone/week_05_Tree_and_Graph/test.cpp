
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
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     bool ok = false;
//     for(int i = 0; i < n; i++)
//     {
//         if (s[i] == 'B')
//         {
//             ok = true;
//             break;
//         }
//     }
//     if(ok)
//         cout << "YES\n";
//     else
//         cout << "NO\n";

//     return 0;
// }

// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl "\n"
// #define sp " "
// int xor1_to_n(int n)
// {
//     if(n % 4 == 0)
//         return n;
//     if(n % 4 == 1) 
//         return 1;
//     if(n % 4 == 2) 
//         return n + 1;
//     return 0;
// }
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
//         int total = xor1_to_n(n);
//         int lft;
//         if(total == 0)
//             lft = 0;
//         else if(total <= n)
//             lft = 1;
//         else
//             lft = 2;
//         cout << lft << "\n";
//     }
//     return 0;
// }


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
//         ll x1, y1, x2, y2, x3, y3;
//         cin >> x1 >> y1>>x2>>y2>>x3>>y3;
//         ll area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
//         bool mid = ((x1-x2) * (x1 - x2) + (y1-y2)*(y1-y2) == (x1-x3)*(x1-x3) + (y1 - y3) * (y1 - y3)) ||
//                       ((x2 - x1) * (x2-x1) + (y2 - y1)*(y2 - y1) == (x2-x3)*(x2-x3) + (y2-y3) * (y2 - y3)) ||
//                       ((x3-x1) * (x3-x1) + (y3 -y1) * (y3 - y1)== (x3-x2)*(x3-x2) + (y3-y2) * (y3 - y2));
        
//         if(area != 0 || mid)   
//             cout << "YES" << nl;
//         else
//             cout << "NO" << nl;
//     }
//     return 0;
// }


// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl "\n"
// #define sp " "
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     map<int,int> freq;
//     for(int i = 0; i < n; i++) 
//     {
//         cin >> arr[i];
//         freq[arr[i]]++;
//     }
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         int x;
//         cin >> x;
//         if(freq[x] == 0)
//         {
//             cout << -1 << nl;
//             continue;
//         }
//         freq[x]--;
//         int mex = 0;
//         while(freq[mex] > 0)
//             mex++;
//         cout << mex << nl;
//         freq[x]++;
//     }
//     return 0;
// }


// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
long long xor1ton(long long n)
{
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        if(n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        ll totalXOR = xor1ton(n);
        if(totalXOR == 0)
            cout << 0 << endl;
        else if(totalXOR <= n)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}