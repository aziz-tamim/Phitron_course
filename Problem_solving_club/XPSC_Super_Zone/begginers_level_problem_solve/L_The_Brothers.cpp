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
    string f1, s1;
    string f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;
    if(s1 == s2)
        cout << "ARE Brothers" << nl;
    else
        cout << "NOT" << nl;
    return 0;
}