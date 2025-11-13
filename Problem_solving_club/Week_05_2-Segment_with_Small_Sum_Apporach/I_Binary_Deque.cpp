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
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int all = 0;
        for (int i = 0; i < n; i++)
            all += arr[i];
        if (all < q)
        {
            cout << -1 << '\n';
            continue;
        }
        if (all == q)
        {
            cout << 0 << '\n';
            continue;
        }
        int l = 0, sum = 0, mxln = 0;
        for (int r = 0; r < n; r++)
        {
            sum += arr[r];
            while (sum > q && l <= r)
            {
                sum -= arr[l];
                l++;
            }
            if (sum == q)
            {
                mxln = max(mxln, r - l + 1);
            }
        }
        cout << n - mxln << '\n';
    }
    return 0;
}