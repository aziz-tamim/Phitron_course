#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i <= m)
            cout << "OK" << "\n";
        else
            cout << "Too Many Requests" << "\n";
    }
    return 0;
}
