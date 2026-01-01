// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         int n;
//         string s;
//         cin >> n >> s;

//         int freq[26] = {0};
//         for(char c : s)
//             freq[c -'a']++;
//         int mxfrq = 0;
//         for(int i=0; i<26; i++)
//             mxfrq = max(mxfrq, freq[i]);

//         cout << n - mxfrq << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = n;
        for(char c='a'; c <='z'; c++)
        {
            int opr = 0;
            int i = 0;
            while(i < n)
            {
                if(s[i] != c)
                {
                    int length = 0;
                    while (i < n && s[i] != c)
                    {
                        length++;
                        i++;
                    }
                    opr++;
                }
                else
                    i++;
            }
            ans = min(ans, opr);
        }
        cout << ans << "\n";
    }
    return 0;
}
