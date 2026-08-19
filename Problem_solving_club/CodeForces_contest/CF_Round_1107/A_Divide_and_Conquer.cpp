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
        int x,y;
        cin >> x >> y;
        if(x%y == 0)
            cout << "YES" << nl;
        else
            cout << "NO" << nl ;
    }
    return 0;
}