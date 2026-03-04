// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int nmax = 1000;
ll fact[nmax+5];

ll ncr(int n,int r)
{
    // if(r>n)
    //     return 0;
    ll fac = 1;
    r = min(r, n-r);
    for(int i=1; i<=r; i++)
        fac = fac*(n-i+1)/i;
    return fac;
}
void solve(int tc)
{
    int n,r;
    cin >> n >> r;
    cout << "Case " << tc << ": ";
    if(r>n)
    {
        cout << 0 << nl;
        return;
    }
    ll sid = (ncr(n,r)*ncr(n,r)*fact[r]);
    cout << sid << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    fact[0] = 1;
    for(ll i=1; i<nmax; i++)
    {
        fact[i] = (fact[i-1]*i);
    }
    int tc;
    cin >> tc;
    for(int i=1; i<=tc; i++)
    {
        solve(i);
    }
    return 0;
}