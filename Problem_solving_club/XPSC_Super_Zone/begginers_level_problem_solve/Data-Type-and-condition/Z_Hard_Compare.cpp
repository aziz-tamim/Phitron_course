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
    double mul1 = b*log(a);
    double mul2 = d*log(c);
    if(mul1>mul2)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    return 0;
}