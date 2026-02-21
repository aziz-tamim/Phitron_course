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
        bool istrue = false;
        if(x<y)
        {
            ll xpos = x/2;
            ll ypos = y/3;
            if(min(xpos,ypos) >= y-x)
                istrue = true;
        }
        if(istrue)
            cout << "Bob" << nl;
        else
            cout << "Alice" << nl;
    }
    return 0;
}
