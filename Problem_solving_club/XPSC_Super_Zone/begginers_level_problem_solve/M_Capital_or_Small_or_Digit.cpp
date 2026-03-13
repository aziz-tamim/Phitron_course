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
    char ch;
    cin >> ch;
    if(ch >= '0' && ch<='9')
        cout << "IS DIGIT" << nl;
    else
    {
        cout << "ALPHA" << nl;
        if(ch>='a' && ch<='z')
            cout << "IS SMALL" << nl;
        else
            cout << "IS CAPITAL" << nl;
    }
    return 0;
}