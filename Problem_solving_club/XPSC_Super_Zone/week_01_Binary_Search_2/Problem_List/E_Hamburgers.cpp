#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    ll b,s,c;
    cin >> b >> s >> c;
    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;
    ll needb = 0, needs = 0, needc = 0;
    for(char ch : str)
    {
        if(ch == 'B')
            needb++;
        else if(ch == 'S')
            needs++;
        else
            needc++;
    }
    auto ok = [&](ll mid)
    {
        ll totalb = max(0LL, needb*mid - b);
        ll totals = max(0LL, needs*mid-s);
        ll totalc = max(0LL, needc*mid-c);
        ll cst = totalb*pb + totals*ps + totalc*pc;
        return cst <= r;
    };
    ll l = 0, rg = 2e12, ans = 0;
    while(l <= rg)
    {
        ll mid = (l+rg)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            rg = mid-1;
    }
    cout << ans << "\n";
    return 0;
}