#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        int mxvl = arr[n-1];
        int ans = 0;
        for(int i=0; i<n-1; i++)
            ans = max(ans, arr[i]%mxvl);

        cout << ans << "\n";
    }
    return 0;
}
