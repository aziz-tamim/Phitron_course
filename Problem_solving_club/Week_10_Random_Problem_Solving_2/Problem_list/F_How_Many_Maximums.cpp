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
        string s;
        cin >> n >> s;
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(i == 0)
            {
                if(s[0] == '1') 
                    ans++;
            }
            else if(i==n-1)
            {
                if(s[n-2] == '0')
                    ans++;
            }
            else
                if(s[i-1]=='0' && s[i]=='1')
                    ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}
