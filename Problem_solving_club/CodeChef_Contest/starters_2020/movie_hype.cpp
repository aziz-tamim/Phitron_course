// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
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
        vector<int> a(n+1);
        for(int i=0; i<=n; i++)
        {
            cin >> a[i];
        }
        int ans = 1e5;
        for(int i=0; i<n; i++)
        {
            int loudness = max(a[i], a[i+1]);
            ans = min(ans, loudness);
        }
        cout << ans << "\n";
    }
    return 0;
}