#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b;
        cin >> a >> b;
        ll ans = a+2*b;
        if(ans %2 !=0)
        {
            cout << "NO" <<'\n';
            continue;
        }
        ll half = ans/2;

        if(half <= 2*b)
        {
            if(half%2 <=a)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else
        {
            ll neA = half-2*b;
            if(neA<= a)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}