#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> arr1(n), arr2(m), arr3(m), arr4(m);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i] >> arr3[i] >> arr4[i];
        arr2[i]--;
        arr3[i]--;
    }
    vector<long long> op(m + 1), add(n + 1);
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        op[x]++;
        if (y + 1 < m)
            op[y + 1]--;
    }
    for (int i = 1; i<m; i++)
        op[i] += op[i - 1];
    for (int i = 0; i < m; i++)
    {
        add[arr2[i]] += arr4[i] * op[i];
        if (arr3[i] + 1 < n)
            add[arr3[i] + 1] -= arr4[i] * op[i];
    }
    for (int i = 1; i < n; i++)
        add[i] += add[i - 1];
    for (int i = 0; i < n; i++)
        cout << arr1[i] + add[i] << " ";
    return 0;
}