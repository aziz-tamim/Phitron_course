// AUTHOR :- ABDUL AZIZ TAMIM
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
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++)
        {
            int a,b,c;
            cin >> a >> b >> c;
            v.push_back({a,i});
            v.push_back({b,i});
            v.push_back({c,i});
        }
        sort(v.begin(), v.end());
        vector<int> freq(n,0);
        int tst = 0, l = 0, ans = INT_MAX;
        for(int j=0; j < v.size(); j++)
        {
            if(freq[v[j].second] == 0)
                tst++;
            freq[v[j].second]++;
            while(tst == n)
            {
                ans = min(ans, v[j].first - v[l].first);

                freq[v[l].second]--;
                if(freq[v[l].second] == 0)
                    tst--;
                l++;
            }
        }
        cout << ans << nl;
    }
    return 0;
}