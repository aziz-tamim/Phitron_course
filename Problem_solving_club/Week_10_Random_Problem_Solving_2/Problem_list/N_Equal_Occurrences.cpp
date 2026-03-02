#include <bits/stdc++.h>
using namespace std;
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
        vector<int> arr(n);
        map<int,int> cnt;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            cnt[arr[i]]++;
        }
        int ans = 0;
        for(int j=1; j<= n; j++)
        {
            int dis = 0;
            for(auto x : cnt)
            {
                if(x.second >= j)   
                    dis++;
            }
            ans = max(ans, dis*j);
        }
        cout << ans << "\n";
    }
    return 0;
}



// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
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
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        vector<vector<int>> perms =
        {
            {2,2,3},
            {2,3,2},
            {3,2,2}
        };

        int answer = 0;

        for(int p = 0; p < 3; p++)
        {
            ll power = h;
            int serum_index = 0;
            int count = 0;

            for(int i = 0; i < n; i++)
            {
                while(serum_index < 3 && power <= a[i])
                {
                    power *= perms[p][serum_index];
                    serum_index++;
                }

                if(power > a[i])
                {
                    power += a[i] / 2;
                    count++;
                }
                else
                {
                    break;
                }
            }

            answer = max(answer, count);
        }

        cout << answer << nl;
    }

    return 0;
}