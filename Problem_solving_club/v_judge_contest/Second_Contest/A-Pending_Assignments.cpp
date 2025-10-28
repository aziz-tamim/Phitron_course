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
        int a, b, c;
        cin >> a >> b >> c;
        int total = a * b;
        int ans = c * 24 * 60;
        if (total <= ans)
            cout << "YES" << '\n';
        else
            cout << "NO" << "\n";
    }
    return 0;
}