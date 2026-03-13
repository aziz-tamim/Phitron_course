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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll ans = (a*b)%100;
    ans = (ans*c)%100;
    ans = (ans*d)%100;
    cout << setw(2) << setfill('0') << ans << "\n";
    return 0;
}