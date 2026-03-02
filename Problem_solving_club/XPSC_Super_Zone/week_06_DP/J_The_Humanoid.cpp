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
        ll n,m;
        cin >> n >>m;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        vector<vector<int>> per = {{2,2,3},{2,3,2},{3,2,2}};
        int ans = 0;
        for(int j=0; j<3; j++)
        {
            ll hig = m;
            ll idx = 0;
            int cnt = 0;
            for(int i=0; i<n; i++)
            {
                while(idx < 3 && hig <= arr[i])
                {
                    hig *= per[j][idx];
                    idx++;
                }
                if(hig > arr[i])
                {
                    hig += arr[i]/2;
                    cnt++;
                }
                else
                    break;
            }
            ans = max(ans,cnt);
        }
        cout << ans << nl;
    }
    return 0;
}