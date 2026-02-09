// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        ll b,g,x,y,n;
        cin >> b >> g >> x >> y >> n;
        ll r = ceil((b+g)/(1.0*n));
        if(r*x <= b && r*y <= g)
            cout << r << nl;
        else
            cout << -1 << nl;
    }
    return 0;
}
