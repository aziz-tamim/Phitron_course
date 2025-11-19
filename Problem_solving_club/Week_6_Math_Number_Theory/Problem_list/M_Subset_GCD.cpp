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
        int l, m;
        cin >> l >> m;
        int n = 1; // GCD store..
        for (int i = l; i >= 1; i--)
        {
            int cnt = l / i;
            if (cnt >= m)
            {
                n = i;
                break;
            }
        }
        for (int i = 1; i <= m; i++)
            cout << n * i << " ";
        cout << "\n";
    }

    return 0;
}
