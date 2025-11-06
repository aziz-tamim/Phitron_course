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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        int maxb = *max_element(b.begin(), b.end());
        sort(a.end() - maxb, a.end());
        for (int x : a)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
