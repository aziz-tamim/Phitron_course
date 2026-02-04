// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
void solve(int test_case)
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n), pre(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    pre[0] = b[0];
    for(int i=1; i<n; i++)
    {
        pre[i] = pre[i-1] + b[i];
    }
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        ll dif = a[i];
        ll sowrd = n-i;
        ll lo = 0, hi = n-1;
        ll x = -1;
        while(lo <= hi)
        {
            ll mid = (lo + hi)/2;
            if(pre[mid] <= sowrd)
            {
                x = mid;
                lo = mid+1;
            }
            else
                hi = mid-1;
        }
        ans = max(ans, dif * (x+1));
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve(tc);
    }
    return 0;
}