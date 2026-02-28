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
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        int trade = (a/x);
        int ans = (b+trade*y) + (a-trade*x);
        cout << ans << nl;
    }
    return 0;
}