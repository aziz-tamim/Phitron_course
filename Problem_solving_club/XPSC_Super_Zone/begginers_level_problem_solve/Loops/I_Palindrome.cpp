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
    int pal = n;
    int revers = 0;
    while(n > 0)
    {
        int digit = n%10;
        revers = revers * 10 + digit;
        n = n/10;
    }
    cout << revers << nl;
    if(revers == pal)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}