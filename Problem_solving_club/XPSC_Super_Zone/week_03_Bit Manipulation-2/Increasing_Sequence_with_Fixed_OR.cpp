// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        deque<ll> ans;
        for(int k=0; k<=__lg(n); k++)
        {
            if((n>>k)&1)
            {
                ll val = n-(1LL << k);
                if(val>0)
                    ans.push_front(val);
            }
        }
        ans.push_back(n);
        cout << ans.size() << '\n';
        for(auto val : ans)
            cout << val << " ";
        cout << '\n';
    }
    return 0;
}
