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
        vector<int> frog(n);
        for(int i=0; i<n; i++)
            cin >> frog[i];
 
        map<int,int> frogcnt;
        for(int x :frog)
            frogcnt[x]++;

        vector<int> trpcnt(n+1, 0);
        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j+=i)
            {
                trpcnt[j] += frogcnt[i];
                ans = max(ans, trpcnt[j]);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}