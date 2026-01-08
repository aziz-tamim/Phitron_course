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
        vector<pair<ll, ll>> cav;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            ll need = 0;
            for(int j=0; j<x; j++)
            {
                ll a;
                cin >> a;
                need = max(need, a-j+1);
            }
            cav.push_back({need, x});
        }
        sort(cav.begin(), cav.end());
        ll now = 0;
        ll shuru = 0;
        for(auto &c : cav)
        {
            if(now < c.first)
            {
                shuru += (c.first-now);
                now = c.first;
            }
            now += c.second; 
        }
        cout << shuru << "\n";
    }
    return 0;
}
