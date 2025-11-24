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
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];

        int xora = 0, xorb = 0;
        for (int i = 1; i <= n; ++i)
        {
            xora ^= a[i];
            xorb ^= b[i];
        }

        if (xora == xorb)
        {
            cout << "Tie\n";
            continue;
        }

        int idx = -1;
        for (int i = n; i >= 1; i--)
        {
            if (a[i] != b[i])
            {
                idx = i;
                break;
            }
        }
        if (idx % 2 == 1)
            cout << "Ajisai" << '\n';
        else
            cout << "Mai" << '\n';
    }
    return 0;
}
