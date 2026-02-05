// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> arr(n);
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        vector<int> freq;
        for(auto x : mp)
            freq.push_back(x.second);
            
        sort(freq.begin(), freq.end());
        int dis = freq.size();
        for(auto x : freq)
        {
            if(m >= x)
            {
                m -= x;
                dis--;
            }
            else
                break;
        }
        int ans = max(1, dis);
        cout << ans << nl;
    }
    return 0;
}
