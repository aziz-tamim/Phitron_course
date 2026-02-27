// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n, h;
        cin >> n >> h;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        int outpt = 0;
        sort(a.begin(), a.end());
        vector<int> m = {2, 2 , 3};
        do
        {
            int mi = 0, cnt = 0;
            ll ans = h;
            for(int i=0; i<n; i++)
            {
                if(a[i] < ans)
                {
                    ans += (a[i]/2);
                    cnt++;
                }
                else
                {
                    if(mi == 3)
                        break;
                    while(mi<3 && ans <= a[i])
                    {
                        ans *= m[mi];
                    }
                    if(ans <= a[i])
                        break;
                    else
                    {
                        ans += (a[i]/2);
                        cnt++;
                    }
                }
            }
            outpt = max(outpt, cnt);
        } while (next_permutation(m.begin(), m.end()));
        cout << outpt << nl;
    }
    return 0;
}