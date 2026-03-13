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
    int a,b;
    cin >> a >> b;
    double x = (double)a/b;

    cout << "floor " << a << " / " << b << " = " << floor(x) << nl;
    cout << "ceil " << a << " / " << b << " = " << ceil(x) << nl;
    cout << "round " << a << " / " << b << " = " << round(x) << nl;
    return 0;
}