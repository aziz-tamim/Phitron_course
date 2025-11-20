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
        ll a,b,n;
        cin >> a >> b >> n;
        ll x = ((n+a-1)/a)*a;
        ll l = lcm(a,b);
        ll cnt =0;
        while(x%b == 0 && cnt <(l/a))
        {
            x+= a;
            cnt++;
        }
        if(x%b == 0)
            cout << -1 << '\n';
        else
            cout << x << '\n';
    }
    return 0;
}