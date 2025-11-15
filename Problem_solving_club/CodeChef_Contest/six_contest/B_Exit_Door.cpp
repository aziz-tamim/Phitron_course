// #include <bits/stdc++.h>
// using namespace std;

// struct fnk
// {
//     int n;
//     vector<int> v;
//     fnk(int n = 0) : n(n), v(n + 1, 0) {}
//     void add(int idx, int val)
//     {
//         for (; idx <= n; idx += idx & -idx)
//             v[idx] += val;
//     }
//     int sum(int idx)
//     {
//         int r = 0;
//         for (; idx > 0; idx -= idx & -idx)
//             r += v[idx];
//         return r;
//     }
//     int range_sum(int l, int r)
//     {
//         return (r < l) ? 0 : sum(r) - sum(l - 1);
//     }
// };

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> p(n + 1), pos(n + 1);
//         for (int i = 1; i <= n; ++i)
//         {
//             cin >> p[i];
//             pos[p[i]] = i;
//         }

//         fnk bit(n);
//         for (int i = 1; i <= n; ++i)
//             bit.add(i, 1);
//         long long ans = 0;
//         for (int x = n; x >= 1; --x)
//         {
//             int cur = pos[x];
//             int left = bit.sum(cur - 1);
//             int right = bit.range_sum(cur + 1, n);
//             ans += min(left, right);
//             bit.add(cur, -1);
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }

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
        vector<int> a(n);
        map<int, int> index;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            index[a[i]] = i;
        }
        int ans = 0;
        for (int i = n; i >= 1; i--)
        {
            int idx = index[i];
            // left side
            int left = 0;
            for (int j = idx - 1; j >= 0; j--)
            {
                if (a[j] < i)
                    left++;
            }
            int right = 0;
            for (int j = idx + 1; j < n; j++)
            {
                if (a[j] < i)
                    right++;
            }
            // cout << i << " " << left << " " << right << endl;
            ans += min(left, right);
        }
        cout << ans << "\n";
    }
    return 0;
}