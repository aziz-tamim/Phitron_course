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
    ll x, y;
    cin >> x >> y;
    ll sum = x + y;
    ll mul = x*y;
    ll sub = x-y;
    cout << x << " + " << y << " = " << sum << nl;
    cout << x << " * " << y << " = " << mul << nl;
    cout << x << " - " << y << " = " << sub << nl;
    return 0;
}