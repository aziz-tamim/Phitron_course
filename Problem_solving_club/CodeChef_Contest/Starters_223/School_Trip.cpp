// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        int n,x,k;
        cin >> n >> x >> k;
        // remove :
        int remove = x%k;
        // Odd :
        int odd = 1e9;
        if(n-x >= k-(x%k))
            odd = k-(x%k);
        int ans = min(odd,remove);
        cout << ans << '\n';
    }
    return 0;
}