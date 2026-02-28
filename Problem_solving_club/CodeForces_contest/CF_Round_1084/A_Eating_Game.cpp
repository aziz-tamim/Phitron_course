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
        vector<int> a(n); 
        for(int i=0; i<n; i++)
            cin >> a[i];
        int mx = *max_element(a.begin(),a.end());
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] == mx)
                ans++;
        }
        cout << ans << nl;
    }
    return 0;
}