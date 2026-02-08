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
        ll n, m;
        cin >> n >> m;
        if (m == 1)
            cout << 0 << "\n";
        else
        {
            int ans = n-(n/m);
            cout << ans<< "\n";
        }
    }
    return 0;
}