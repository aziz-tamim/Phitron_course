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
    int n;
    cin >> n;
    ll ans = 0;
    for(int i=1; i<n; i++)
    {
        ans += (n-1)/i;
    }
    cout << ans << nl;
    return 0;
}