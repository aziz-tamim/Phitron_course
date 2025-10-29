#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, trg_val;
    cin >> n >> trg_val;
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;
        long long trg = trg_val - a[i].first;
        while (l < r)
        {
            long long suml = a[l].first + a[r].first;
            if (suml == trg)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << "\n";
                return 0;
            }
            else if (suml < trg)
                l++;
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE" << "\n";
    return 0;
}
