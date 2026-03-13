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
    int s1, e1, s2, e2;
    cin >> s1 >> e1 >> s2 >> e2;

    if(s2 >= s1 && s2<=e1)
    {
        if(e1 < e2)
            cout << s2 << " " << e1;
        else
            cout << s2 << " " << e2;
    }
    else if(s2 < s1 && e2>=s1)
    {
        if(e1 < e2)
            cout <<  s1 << " " << e1;
        else
            cout << s1 << " " << e2;
    }
    else
        cout << -1 << nl;
    return 0;
}