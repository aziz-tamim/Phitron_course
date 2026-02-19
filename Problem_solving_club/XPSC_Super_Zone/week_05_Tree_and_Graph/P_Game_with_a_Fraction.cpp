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
        ll x,y;
        cin >> x >> y;
        if(x*3 == y*2)
            cout << "Bob" << nl;
        else if(x*3 > y*2)
            cout << "Alice" << nl;
        else
            cout << "Bob" << nl;
    }
    return 0;
}