#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll val = i + j + 2;
                cout << val;
                if (j + 1 < m)
                    cout << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}