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
    double r;
    cin >> r;
    double pi = 3.141592653;
    double area = pi * r*r;
    cout << fixed << setprecision(9) << area << nl;
    return 0;
}