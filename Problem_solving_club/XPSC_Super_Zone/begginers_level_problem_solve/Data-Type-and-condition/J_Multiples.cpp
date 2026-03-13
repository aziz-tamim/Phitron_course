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
    if(a%b==0 || b%a==0)
        cout << "Multiples" << nl;
    else
        cout << "No Multiples" << nl;

    return 0;
}