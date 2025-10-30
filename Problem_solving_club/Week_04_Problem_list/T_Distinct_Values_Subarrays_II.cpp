#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map<int, int> mp;
    int l = 0;
    long long ans = 0;
    for (int r = 0; r < n; r++)
    {
        mp[arr[r]]++;
        while (mp.size() > k)
        {
            mp[arr[l]]--;
            if (mp[arr[l]] == 0)
                mp.erase(arr[l]);
            l++;
        }
        ans += (r - l + 1);
    }
    cout << ans << "\n";
    return 0;
}