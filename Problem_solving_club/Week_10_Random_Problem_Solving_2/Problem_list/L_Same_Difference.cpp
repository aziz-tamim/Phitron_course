
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for(int i=0; i<n-1; i++)
        {
            if(s[i] != s[n -1])
                ans++;
        }
        cout << ans << "\n";
    }
}