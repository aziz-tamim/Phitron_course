#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long> pre(n + 1, 0);
    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + arr[i];
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long ans = pre[r] - pre[l - 1];
        cout << ans << "\n";
    }
    return 0;
}
