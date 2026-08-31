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
        int n;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            cout << i << sp;
            cout << n + 2 * i-1 << sp;
            cout << n + 2 * i << sp;
        }
        cout << nl;
    }
    return 0;
}