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
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &i : a)
            cin >> i;
        int mx = 0, mn = 1e9+7, cnt = 0;
        for(int i=0; i<n; i++)
        {
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
            if(mx-mn > k)
            {
                cnt++;
                mn = 1e9+7;
                mx = 0;
            }
        }
        cout << cnt << nl;
    }
    return 0;
}