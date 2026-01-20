#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int d)
{
    ll smdivi = 1+d;
    ll snddivi = smdivi+d;
    ll ans = smdivi*snddivi;
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
        int d;
        cin >> d;
        solve(d);
    }
    return 0;
}
