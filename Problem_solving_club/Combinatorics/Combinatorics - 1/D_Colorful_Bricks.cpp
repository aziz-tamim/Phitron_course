// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int nmax = 1e6;
const int mod = 998244353;
ll fact[nmax+5];
ll bin_expo(int a, int b)
{ 
    if(b==0)
        return 1%mod;
    ll x = bin_expo(a, b/2);
    if(b&1)
        return (((x*x)%mod)*a)%mod;
    else
        return (x*x)%mod;
}
ll mod_inv(int n)
{
    return bin_expo(n,mod-2)%mod;
}
ll ncr(int n, int r)
{
    ll a = fact[n];
    ll b = (fact[r]*fact[n-r])%mod;
    return (a*mod_inv(b))%mod;
}
ll npr(int n, int r)
{
    ll a = fact[n];
    ll b = (fact[n-r]%mod);
    return (a*mod_inv(b))%mod;
}
void solve(int tc)
{
    ll n,m,k;
    cin >> n >> m >> k;
    // ans = n C k * m* (m-1)^k
    cout << (((ncr(n-1,k)*m)%mod)*bin_expo(m-1,k))%mod<<nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    fact[0] = 1;
    for(ll i=1; i<=nmax; i++)
    {
        fact[i] = (fact[i-1] * i)%mod;
    }
        solve(1);
    return 0;
}