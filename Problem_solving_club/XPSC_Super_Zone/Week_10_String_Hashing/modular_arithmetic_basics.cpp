// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int MOD = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 1;
    for(int i=1; i<=n; i++)
    {
        ans = (1LL * ans%MOD * i%MOD)%MOD;
    }
    cout << ans << nl;
    // ans = 1;
    // ans = (1%MOD*2*MOD)%MOD
    // ans = (2%MOD*3%MOD)%MOD
    // ans = (6%MOD*4%MOD)%MOD
    return 0;
}