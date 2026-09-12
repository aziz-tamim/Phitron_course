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
        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int mx = 0;
        for(auto it : mp)
            mx = max(mx, it.second);
        cout << (mx+1)/2 << nl;
    }
    return 0;
}