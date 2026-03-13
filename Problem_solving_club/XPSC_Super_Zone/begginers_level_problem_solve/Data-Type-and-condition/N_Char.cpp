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
    char ch = 'a';
    cin >> ch;
    if(ch>='a' && ch<='z')
    {
        ch = ch-32;
        cout << ch << nl;
    }
    else
    {
        ch = ch + 32;
        cout << ch << nl;
    }
    return 0;
}