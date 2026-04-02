// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
const int N = 1e5+9;
int power(ll x, ll n, int mod) // O(logn)
{
    int ans = 1%mod;
    while(n>0)
    {
        if(n&1)
        {
            ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}
pair<int,int> pw[N], ipw[N];
void prec()   // O(N)
{
    pw[0] = {1,1};
    for(int i=1; i<N; i++)
    {
        pw[i].first = 1LL * pw[i-1].first * p1 % mod1;
        pw[i].second = 1LL * pw[i-1].second * p2 % mod2;
    }
    int ip1 = power(p1, mod1-2, mod1);
    int ip2 = power(p2, mod2-2, mod2);
    ipw[0] = {1,1};
    for(int i=1; i<N; i++)
    {
        ipw[i].first = 1LL * ipw[i-1].first * ip1 % mod1;
        ipw[i].second = 1LL * ipw[i-1].second * ip2 % mod2;
    }
}

pair<int,int> pref[N];
void build(string s)  // O(N)
{
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        pref[i].first = 1LL * s[i] * pw[i].first % mod1;
        if(i) pref[i].first = (pref[i].first + pref[i-1].first)%mod1;
        pref[i].second = 1LL * s[i] * pw[i].second % mod2;
        if(i) pref[i].second = (pref[i].second + pref[i-1].second)%mod2;
    }
}
pair<int,int> get_hash(int i, int j) // O(1)
{
    pair<int,int> hs({0,0});
    hs.first = pref[j].first;
    if(i) hs.first = (hs.first - pref[i-1].first + mod1)%mod1;
    hs.first = 1LL * hs.first * ipw[i].first%mod1;

    hs.second = pref[j].second;
    if(i) hs.second = (hs.second - pref[i-1].second + mod2)%mod2;
    hs.second = 1LL * hs.second * ipw[i].second % mod2;
    return hs;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    prec();
    string s;
    cin >> s;
    build(s);
    int n = s.size();
    int idx = 0;
    auto ok = [&](int len)
    {
        set<pair<int,int>> unq;
        bool ok = false;
        for(int i=0; i+len-1 < n; i++)
        {
            auto hs = get_hash(i, i+len-1);
            if(unq.find(hs) != unq.end())
            {
                idx = i;
                ok = true;
                break;
            }
            unq.insert(hs);
        }
        return ok;
    };
    int l=1, r= n, mid, ans = -1;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    // cout << s.substr(idx, ans) << nl;
    if(ans == -1)
        cout << ans << nl;
    else
        cout << s.substr(idx,ans) << nl;
    return 0;
}