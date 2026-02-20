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
        ll x,y;
        cin >> x >> y;
        if(x>=y)
            cout << "Alice" << nl;
        else
        {
            if(min(x/2,y/3) >= y-x)
                cout << "Bob" << nl;
            else
                cout << "Alice" << nl;
        }
    }
    return 0;
}
