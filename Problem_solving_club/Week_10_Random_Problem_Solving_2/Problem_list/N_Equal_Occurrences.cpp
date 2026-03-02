#include <bits/stdc++.h>
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
        vector<int> arr(n);
        map<int,int> cnt;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            cnt[arr[i]]++;
        }
        int ans = 0;
        for(int j=1; j<= n; j++)
        {
            int dis = 0;
            for(auto x : cnt)
            {
                if(x.second >= j)   
                    dis++;
            }
            ans = max(ans, dis*j);
        }
        cout << ans << "\n";
    }
    return 0;
}
