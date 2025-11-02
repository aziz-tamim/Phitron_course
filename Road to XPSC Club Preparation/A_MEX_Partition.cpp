#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> pre(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            pre[arr[i]]++;
        }
        int ans =0;
        while(pre[ans]>=2 )
            ans++;
        cout << ans << "\n";
    }
    return 0;
}