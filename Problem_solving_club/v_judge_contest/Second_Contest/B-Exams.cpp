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
        int x, y, z;
        cin >> x >> y >> z;
        int ttl_std = x * y;
        int ans = z * 2;
        if (ans > ttl_std)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}