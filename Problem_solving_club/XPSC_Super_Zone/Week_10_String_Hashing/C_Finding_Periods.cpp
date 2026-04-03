// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
const int N = 1e6+9;
int power(ll x, ll n, int mod)
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
pair<int,int> pw[N], ipw[N], pref[N];
void prec()
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
void build(string s)
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
pair<int,int> get_hash(int l, int r)
{
    pair<int,int>h;
    h.first = pref[r].first;
    if(l) h.first = (h.first - pref[l-1].first + mod1) % mod1;
    h.first = 1LL * h.first * ipw[l].first % mod1;
    h.second = pref[r].second;
    if(l) h.second = (h.second - pref[l-1].second + mod2) % mod2;
    h.second = 1LL * h.second * ipw[l].second % mod2;
    return h;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    prec();
    string s;
    cin >> s;
    int n = s.size();
    build(s);
    vector<int> ans;
    for(int len = 1; len<=n; len++)
    {
        bool ok = true;
        for(int i=len; i<n; i+= len)
        {
            int l1 = 0, r1 = min(len-1, n-1);
            int l2 = i, r2 = min(i+len-1, n-1);

            auto h1 = get_hash(l1, r1 - (l2 + len-1 >= n ? (l2 + len-n) : 0));
            auto h2 = get_hash(l2, r2);

            if(h1 != h2)
            {
                ok = false;
                break;
            } 
        }
        if(ok)
            ans.push_back(len);
    }
    for(int x : ans)
        cout << x << sp;
    cout << nl;
    return 0;
}