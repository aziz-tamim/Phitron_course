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
        if(n&1)
        {
            cout << 0 << "\n";
            continue;
        }
        if(n/10 == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        int last = n%10;
        n/= 10;
        int ans = 3;
        while(n >0)
        {
            int d = n%10;
            n /= 10;
            if(d&1)
            {
                ans = 1;
                break;
            }
            if(d > last)
            {
                ans = 2;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}