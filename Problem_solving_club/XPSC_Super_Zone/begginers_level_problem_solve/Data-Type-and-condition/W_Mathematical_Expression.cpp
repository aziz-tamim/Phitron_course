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
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    int result;
    if(s == '+')
        result = a+b;   
    else if(s == '-')
        result = a-b;
    else if(s == '*')
        result = a*b;
    if(result == c)
        cout << "Yes" << nl;
    else
        cout << result << nl;

    return 0;
}