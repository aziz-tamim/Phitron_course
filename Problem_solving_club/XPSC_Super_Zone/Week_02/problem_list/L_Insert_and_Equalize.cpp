// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    map<int,bool> presence;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        presence[a[i]] = true;
    }
    if(n==1)
    {
        cout << 1 << "\n";
        return;
    }
    ll gc = 0;
    sort(a.begin(), a.end());
    for(int i=1; i<n; i++)
    {
        gc = gcd(gc,a[i]-a[0]);
    }
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
       ans += (a.back() - a[i]) / gc;

    }
    for(ll i=a.back() - gc; 1; i -= gc)
    {
        if(!presence[i])
        {
            ans += (a.back() - i) / gc;
            break;
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}