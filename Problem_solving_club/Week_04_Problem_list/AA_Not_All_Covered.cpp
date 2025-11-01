#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    vector<int> pre_sum(a + 1);
    for (int i = 0; i < b; i++)
    {
        int lft, rgt;
        cin >> lft >> rgt;
        lft--, rgt--;
        pre_sum[lft]++;
        pre_sum[rgt + 1]--;
    }
    for (int i = 1; i <= a; i++)
        pre_sum[i] = pre_sum[i] + pre_sum[i - 1];

    int ans = INT_MAX;
    for (int i = 0; i < a; i++)
        ans = min(ans, pre_sum[i]);
    cout << ans << "\n";
}
