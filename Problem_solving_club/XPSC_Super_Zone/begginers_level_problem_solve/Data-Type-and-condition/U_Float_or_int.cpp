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
    double n;
    cin >> n;
    int x = n;
    if(x == n)
        cout << "int " << x;
    else
        cout << "float " << x << " " << n-x;
    // cout << x;
    return 0;
}