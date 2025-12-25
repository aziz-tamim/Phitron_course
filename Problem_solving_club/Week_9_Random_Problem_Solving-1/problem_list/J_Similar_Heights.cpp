#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        unordered_map<ll, int> freq;
        for(int i=0; i<n; i++)
        {
            ll h;
            cin >> h;
            freq[h]++;
        }
        int cnt = 0;
        for(auto it : freq)
        {
            if(it.second == 1)
                cnt++;
        }
        int ans = (cnt+1)/2;
        cout << ans << "\n";
    }
    return 0;
}
