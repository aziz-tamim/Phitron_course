#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n)
{
    if(n<2)
        return false;
    for(ll i=2; i*i <= n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
ll cntPrime(ll str)
{
    while(isPrime(str) == false)
        str++;
    return str;
}

void solve(int d)
{
    ll fstdiv = cntPrime(1+d);
    ll snddiv = cntPrime(fstdiv+d);
    ll ans = fstdiv * snddiv;
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int d;
        cin >> d;
        solve(d);
    }
    return 0;
}
