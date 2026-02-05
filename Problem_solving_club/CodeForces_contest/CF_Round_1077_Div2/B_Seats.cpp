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
    string s;
    cin >> s;
    vector<pair<int,int>> v;
    int zero = 0, one = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
        {
            if(zero) {
                v.push_back({zero, 1+(one>0)});
            }
            one++;
            zero = 0;
        }
        else
            zero++;
    }
    if(zero) {
        v.push_back({zero, (one>0)});
    }
    int ans = 0;
    for(auto [x, o] : v)
    {
        if(o == 0)
            ans += ((x+2)/3);
        else if(o == 1)
            ans += ((x+1)/3);
        else
            ans += (x/3);
    }
    cout << ans+one << nl;
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