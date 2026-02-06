// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int ans = 1;
        for(int j=0; j<20; j++)
        {
            int x = -1, y = -1, cnt =0;
            for(int i=0; i<n; i++)
            {
                if(arr[i] & (1 << j))
                {
                    if(y == -1)
                        y = i;
                    if(x != -1)
                        cnt = max(cnt, i-x);
                    x = i;
                }
            }
            if(y != -1)
            {
                cnt = max(cnt, y+1);
                cnt = max(cnt, n-x);
                ans = max(ans, cnt);
            }
        }
        cout << ans << nl;
    }
    return 0;
}
