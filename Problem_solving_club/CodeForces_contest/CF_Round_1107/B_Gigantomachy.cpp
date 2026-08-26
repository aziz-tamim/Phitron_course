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
        int n, m;
        cin >> n >> m;

        ll a, b, x;
        cin >> a;
        for(int i=1; i<n; i++)
            cin >> x;

        cin >> b;
        for(int i=1; i<m; i++)
            cin >> x;

        ll bea = a + n-1;
        ll ver = b + m-1;

        if(bea >= ver)
            cout << 1 << nl;
        else
            cout << 2 << nl;
    }
    return 0;
}
