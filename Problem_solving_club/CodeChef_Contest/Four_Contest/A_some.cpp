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
        int x, y;
        cin >> x >> y;
        int cnt = 0;

        for (int i = 1; i <= x; i++)
        {
            if (i > y)
                cnt += (i - y);
        }
        cout << cnt << "\n";
    }
    return 0;
}
