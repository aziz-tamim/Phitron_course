// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int oo = 1e9+5;
void solve(int test_case)
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    vector<int> w = v;
    sort(w.begin(), w.end());
    int mx = w.back(), mn = w[0];
    int ans = 0;
    int lo = 0, hi= oo;
    while(lo <= hi)
    {
        int k = (lo+hi)/2;
        int flag = true;
        for(int i=0; i<n; i++)
        {
            int x = v[i];
            if(x==w[i])
                continue;
            if(!(mx-x >= k || x-mn >= k)) {
                flag = false;
                break;
            }
        }
        if(flag) {
            ans = max(ans,k);
            lo = k+1;
        }
        else
            hi = k-1;
    }
    if(ans == oo)
        cout << -1 << nl;
    else
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