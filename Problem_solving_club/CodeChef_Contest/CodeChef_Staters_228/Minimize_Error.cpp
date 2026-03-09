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
        ll n,q;
        cin >> n >> q;
        ll partition_size = ceil((n*1.0)/ (q+1));
        ll ans = partition_size/2;
        cout << ans << nl;
    }
    return 0;
}
