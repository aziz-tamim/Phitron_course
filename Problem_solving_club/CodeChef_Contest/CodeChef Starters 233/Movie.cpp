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
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;
        int s = min(n,m);
        int cst = s*c+(n-s) * a+(m-s) * b;
        cout << cst << nl;
    }
    return 0;
}