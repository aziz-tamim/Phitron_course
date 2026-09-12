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
        int x, y;
        cin >> x >> y;
        for(ll d = 1; ; d++)
        {
            bool possible = false;
            for(ll k = 1; k<=d; k++)
            {
                ll sum = k*(k+1) * (2*k+1) / 6;
                ll income = y * (sum + (d-k) * k * k);
                ll cost = x * k;
                if(income > cost)
                {
                    possible = true;
                    break;
                }
            }
            if(possible)
            {
                cout << d << nl;
                break;
            }
        }
    }
    return 0;
}