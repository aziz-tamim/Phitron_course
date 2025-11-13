#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (auto &x : ar)
            cin >> x;
        sort(ar.begin(), ar.end());
        int ans = 0;

        for (int i = 2; i <= 2 * n; i++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                int sum = ar[l] + ar[r];
                if (sum == i)
                {
                    cnt++;
                    l++;
                    r--;
                }
                else if (sum < i)
                    l++;
                else
                    r--;
            }
            ans = max(ans, cnt);
        }
        cout << ans << "\n";
    }
    return 0;
}
