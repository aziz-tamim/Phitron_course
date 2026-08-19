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
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        int len = s.size();
        ll y = 1;
        for(int i = 0; i<len; i++)
        {
            y *= 10;
        }
        y += 1;
        cout << y << nl;
    }
    return 0;
}