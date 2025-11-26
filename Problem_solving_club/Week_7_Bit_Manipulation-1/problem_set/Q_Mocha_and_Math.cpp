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
        int n;
        cin >> n;
        int m, ans =-1;
        for(int i=0; i<n; i++)
        {
            cin >> m;
            if(ans==-1)
                ans = m;
            else
                ans &= m;
        }
        cout << ans << '\n';
    }
    return 0;
}