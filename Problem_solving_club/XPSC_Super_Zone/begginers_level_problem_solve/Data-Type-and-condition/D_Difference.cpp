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
    ll x = (a*b) - (c*d);
    cout << "Difference" << " = " << x << nl;
    return 0;
}