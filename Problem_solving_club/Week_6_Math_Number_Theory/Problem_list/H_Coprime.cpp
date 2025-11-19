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
        map<int, int> mp;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            mp[x] = i;
        }
        int ans =-1;
        for(auto &x :mp)
        {
            for(auto xx : mp)
            {
                int a = x.first;
                int b = xx.first;
                if(__gcd(a,b) ==1)
                    ans = max(ans, x.second + xx.second);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}