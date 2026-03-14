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
    int x;
    cin >> x;
    bool prime = true;
    for(int i=2; i*i <= x; i++)
    {
        if(x%i == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    return 0;
}