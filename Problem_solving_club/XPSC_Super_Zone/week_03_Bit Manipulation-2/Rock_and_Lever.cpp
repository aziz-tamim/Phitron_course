// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
const int maxN = 30;
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
        vector<int> cnt(maxN);
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            cnt[__lg(x)]++;
        }
        ll ans = 0;
        for(int i=0; i<maxN; i++)
        {
            ans += (1LL * cnt[i] * (cnt[i]-1))/2;
        }
        cout << ans << "\n";
    }
    return 0;
}