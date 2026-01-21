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
 
        vector<int> frogcnt(n+1, 0);
        for(int i=0; i<n; i++)
        {
            // if(frog[i] > n)
            //     continue;
            for(int j=frog[i]; j<=n; j+= frog[i])
                frogcnt[j]++;
        }
        int ans = 0;
        for(int i=0; i<=n; i++)
            ans = max(ans, frogcnt[i]);
        cout << ans << "\n";
    }
    return 0;
}