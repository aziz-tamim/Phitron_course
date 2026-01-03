#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        int fnd = 0;
        for (int i = 0; i < m; i++)
        {
            if (cnt[i] == 0)
                fnd++;
        }
        int ans = max(fnd, cnt[m]);
        cout << ans << "\n";
    }
    return 0;
}
