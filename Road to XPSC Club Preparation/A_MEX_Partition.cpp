#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> freq(201, 0);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x >= 0 && x < (int)freq.size())
                freq[x]++;
        }
        int ans = 0;
        while (freq[ans] > 0)
            ans++;
        cout << ans << '\n';
    }
    return 0;
}
