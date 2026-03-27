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
        // value, index
        vector<pair<int,int>> a(n);
        int zero = 0;
        for(int i=0; i<n; i++)
        {
            int value;
            cin >> value; 
            a[i] = {value, i+1};
            if(value == 0)
                zero++;
        }
        sort(a.begin(), a.end());
        if(zero == n)
            cout << -1 << nl;
        else
        {
            int mx1_idx = a[n-1].second;
            int mx2_idx = a[n-2].second;
            int mn_idx = a[0].second;
            cout << mx1_idx << sp << mx2_idx << sp << mn_idx << nl;
        }
    }
    return 0;
}