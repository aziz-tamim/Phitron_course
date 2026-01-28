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
        int n,m;
        cin >> n >> m;
        vector<int> arr(n), b(m);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<m; i++)
            cin >> b[i];
        for(int i=0; i<m; i++)
        sort(arr.begin(), arr.end());
        ll cnt = 0;
        for(int i=0; i<m; i++)  // NlogN
        {
            int foundidx = upper_bound(arr.begin(), arr.end(), b[i]) - arr.begin();
            cnt += (n - foundidx);
        }
        cout << cnt << "\n";
    }
    return 0;
}