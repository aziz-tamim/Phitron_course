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
        int sum = 0;
        int mx = -68;
        for(int i=0; i<7; i++)
        {
            int x;
            cin >> x;
            sum += x;
            mx = max(mx, x);
        }
        cout << 2 * mx - sum << nl;
    }
    return 0;
}