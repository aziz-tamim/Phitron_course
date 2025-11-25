#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        int ch = (1 << 30)-1;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            ch &=x;
        }
        ll ans =0;
        for(int j=0; j<30; j++)
        {
            if(ch&(1<<j))
            {
                ans += (1LL << j);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}