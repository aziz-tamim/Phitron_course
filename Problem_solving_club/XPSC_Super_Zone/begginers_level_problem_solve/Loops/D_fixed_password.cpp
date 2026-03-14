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
    int pass;
    while(cin >> pass)
    {
        if(pass == 1999)
        {
            cout << "Correct" << nl;
            break;
        }
        else
            cout << "Wrong" << nl;
    }
    return 0;
}