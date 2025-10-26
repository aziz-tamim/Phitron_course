#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, long long> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    long long ans = 0;
    for (auto &[a, fa1] : freq)
    {
        if (fa1 >= 2)
        {
            for (auto &[b, fb] : freq)
            {
                if (a != b)
                    ans += (fa1 * (fa1 - 1) / 2) * fb;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}