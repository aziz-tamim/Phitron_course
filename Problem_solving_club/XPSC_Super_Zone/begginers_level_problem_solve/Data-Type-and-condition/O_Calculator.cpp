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
    char s;
    cin >> a >> s >> b;
    if(s == '+')
        cout << a+b;
    else if(s == '-')
        cout << a-b;
    else if(s == '*')
        cout << a*b;
    else if(s == '/')
        cout << a/b;
    return 0;
}