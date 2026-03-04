// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int nmax = 2e6+5;
const int mod = 1000000007;
ll fact[nmax+5];
ll bin_expo(int a, int b) // it will return a^b
{
    if(b==0)
        return 1%mod;
    ll x = bin_expo(a,b/2);
    if(b&1)
        return (((x*x)%mod)*a)%mod;
    else
        return (x*x)%mod;
}
ll mod_inv(int n)
{
    return bin_expo(n, mod-2)%mod;
}
ll ncr(int n, int r)   // n! / (r!*(n-r)!)
{
    ll a = fact[n];
    ll b = (fact[r]*fact[n-r])%mod;
    return (a*mod_inv(b))%mod;
}
ll npr(int n, int r) // n! / (n-r)
{
    ll a = fact[n];
    ll b = (fact[n-r])%mod;
    return (a*mod_inv(b))%mod;
}
void solve(int tc)
{
    int n,r;
    cin >> n >> r;
    cout << "Case " << tc << ": ";
    cout << ncr(n+r-1, r-1) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // pre calculate for 1 to nmax factorial
    fact[0] = 1;
    for(ll i=1; i<nmax; i++)
    {
        fact[i] = (fact[i-1] * i)% mod;
    }
    
    int tc;
    cin >> tc;
    for(int i=1; i<=tc; i++)
    {
        solve(i);
    }
    return 0;
}