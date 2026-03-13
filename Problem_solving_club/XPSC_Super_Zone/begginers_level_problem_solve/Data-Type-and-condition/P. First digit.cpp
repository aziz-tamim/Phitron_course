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
    int n;
    cin >> n;
    int fst_digit = n/1000;
    if(fst_digit%2 == 0)
        cout << "EVEN" << nl;
    else
        cout << "ODD" << nl;
    return 0;
}