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
        vector<int> c(n);
        for(int i=0; i<n; i++)
            cin >> c[i];
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            ans = max(ans, c[i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j= i+1; j<n; j++)
            {
                if (c[i] <= c[j])
                {
                    ans = max(ans, c[i] + c[j]);
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}