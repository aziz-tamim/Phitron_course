#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        unordered_map<int,int> mp;
        bool fst = false;
        bool scnd = false;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if(x==0)
                fst = true;
        }
        int ans =0;
        for(auto it : mp)
        {
            if(it.first != 0 && it.second %2 == 1)
                ans++;
            if(it.second >= 2)
                scnd = true;
        }
        if(fst || scnd)
            ans++;
        cout << ans << "\n";
    }
    return 0;
}
