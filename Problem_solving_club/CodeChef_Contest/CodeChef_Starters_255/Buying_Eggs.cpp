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

    int x, y, f;
    cin >> x >> y >> f;

    int first_shop = x*12;
    int second_shop = y*12 + f;
    
    cout << min(first_shop, second_shop) << nl;
    return 0;
}