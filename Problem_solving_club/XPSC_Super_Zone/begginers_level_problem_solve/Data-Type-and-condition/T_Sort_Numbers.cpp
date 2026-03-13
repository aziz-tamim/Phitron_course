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
    int a,b,c;
    cin >> a >> b >> c;
    int mn,mid,mx;
    mn = min(a,min(b,c));
    mx = max(a,max(b,c));
    mid = a+b+c -mn - mx;
    cout << mn << nl;
    cout << mid << nl;
    cout << mx <<nl;
    cout << nl;
    cout << a << nl;
    cout << b << nl;
    cout << c << nl;
    return 0;
}