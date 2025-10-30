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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        string s;
        cin >> s;
        vector<long long> pre(n + 1, 0);
        for (int i = 0; i < n; i++)
            pre[i + 1] = pre[i] + arr[i];
        vector<int> l, r;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
                r.push_back(i);
            else if (s[i] == 'L')
                l.push_back(i);
        }
        long long ans = 0;
        int i = 0, j = r.size() - 1;
        while (i < l.size() && j >= 0)
        {
            if (l[i] < r[j])
            {
                int lft = l[i];
                int rgt = r[j];
                ans += pre[rgt + 1] - pre[lft];
                i++;
                j--;
            }
            else
                j--;
        }
        cout << ans << "\n";
    }
    return 0;
}
