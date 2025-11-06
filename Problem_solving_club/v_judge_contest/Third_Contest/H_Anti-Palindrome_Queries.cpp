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
        int n, q;
        cin >> n >> q;
        int arr[n];
        int one[n + 1] = {0};
        int two[n + 1] = {0};
        int thr[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                one[i + 1] = 1;
            else if (arr[i] == 2)
                two[i + 1] = 1;
            else
                thr[i + 1] = 1;
            one[i + 1] += one[i];
            two[i + 1] += two[i];
            thr[i + 1] += thr[i];
        }
        while (q--)
        {
            int left, right;
            cin >> left >> right;
            int size = (right - left) + 1;
            if (size & 1)
                cout << "NO" << "\n";
            else
            {
                size = size / 2;
                int x = one[right] - one[left - 1];
                int y = two[right] - two[left - 1];
                int z = thr[right] - thr[left - 1];
                if ((x == y) && (y == z))
                    cout << "No" << "\n";
                else if ((x <= size) && (y <= size) && (z <= size))
                {
                    vector<int> v = {x, y, z};
                    sort(v.begin(), v.end());
                    if (v[2] == (v[0] + v[1]))
                        cout << "Yes" << "\n";
                    else
                        cout << "No" << "\n";
                }
                else
                    cout << "No" << "\n";
            }
        }
    }
    return 0;
}
