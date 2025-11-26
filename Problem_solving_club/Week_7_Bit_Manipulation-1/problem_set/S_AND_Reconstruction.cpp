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
        vector<int> a(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> a[i];
        vector<int> b(n);
        b[0] = a[0];
        b[n - 1] = a[n - 2];
        for (int i = 1; i < n - 1; i++)
        {
            b[i] = a[i - 1] | a[i];
        }

        bool right = true;
        for (int i = 0; i < n - 1; i++)
        {
            if ((b[i] & b[i + 1]) != a[i])
                right = false;
        }
        if (right)
        {
            for (int i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << '\n';
        }
        else
            cout << -1 << '\n';
    }
    return 0;
}