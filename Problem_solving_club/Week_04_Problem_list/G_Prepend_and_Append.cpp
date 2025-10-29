#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int nm;
        string str;
        cin >> nm >> str;
        int l = 0, r= nm-1;

        while(l<r && str[l] != str[r])
        {
            l++;
            r--;
        }
        int ans = (r-l + 1);
        cout << ans << '\n';
        
    }
    return 0;
}