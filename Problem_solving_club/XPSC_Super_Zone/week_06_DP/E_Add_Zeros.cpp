// // AUTHOR :- ABDUL AZIZ TAMIM
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl "\n"
// #define sp " "
// const int maxN = 2e5+9;
// ll a[maxN];
// int n;
// map<ll,ll> dp;
// ll f(ll l)
// {
//     if(dp.count(l))
//         return dp[l];
//     ll ans = l;
//     for(int i=2; i<=n; i++)
//     {
//         if(a[i] == l+1-i)
//             ans = max(ans, f(l+i-1));
//     }
//     return dp[l] = ans;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         cin >> n;
//         for(int i=1; i<=n; i++)    
//             cin >> a[i];
//         dp.clear();
//         ll ans = f(n);
//         cout << ans << nl;
//     }
//     return 0;
// }


// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e5+9;
ll a[maxN];
ll f(ll n, ll a[])
{
    ll ans = n;
    stack<ll> st;
    st.push(ans);
    ll l = ans;
    while(st.empty() == false)
    {
        ll curr_l = st.top();
        st.pop();
        l = max(l, curr_l);

        for(int i=2; i<=n; i++)
        {
            if(a[i] == curr_l + 1-i)
                st.push(curr_l+i-1);
        }
    }
    return l;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        for(int i=1; i<=n; i++)
            cin >> a[i];
        cout << f(n,a) << nl;
    }
    return 0;
}