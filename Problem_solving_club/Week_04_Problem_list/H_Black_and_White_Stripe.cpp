#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int wht= 0;
        for(int i=0; i<k; i++)
        {
            if(s[i] == 'W')
                wht++;
        }
        int ans = wht;
        for(int i=k; i<n; i++)
        {
            if(s[i] == 'W')
                wht++;
            if(s[i-k] == 'W')
                wht--;
            ans = min(ans,wht);
        }
        cout << ans << "\n";
    }
    return 0;
}