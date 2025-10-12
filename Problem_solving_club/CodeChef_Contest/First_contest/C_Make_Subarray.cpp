// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int num;
//         string str;
//         cin >> num >> str;

//         int val1 = -1;
//         int val2 = -1;
//         for(int i=0; i<num; i++)
//         {
//             if(str[i] == '1')
//             {
//                 if(val1 == -1)
//                     val1 = i;
//                 val2 = i;

//             }
//         }
//         if(val1 == -1)
//             cout << 0 << "\n";
//         else
//         {
//             int cnt = 0;
//             for(int i=val1; i<= val2; i++)
//             {
//                 if(str[i] == '0')
//                     cnt++;
//             }
//             cout << cnt << '\n';
//         }
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int first1 = -1, last1 = -1;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '1')
            {
                first1 = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i] == '1')
            {
                last1 = i;
                break;
            }
        }
        int ans = 0;
        if(first1 == -1)
        {
            cout << 0 << endl;
            continue;
        }

        for(int i=first1; i<=last1; i++)
        {
            if(s[i] == '0')
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}