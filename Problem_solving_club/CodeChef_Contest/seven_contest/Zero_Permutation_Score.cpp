#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr(101, 0);
    for (int n = 1; n <= 100; n++) 
    {

        vector<int> a(n, 0);
        int str = 0;

        for (int stp = 1; stp <= n; stp++)
        {

            int bstps = 0;
            int bst = INT_MAX;

            for (int idx = 0; idx<n; idx++)
            {

                int old = a[idx];
                a[idx]++;

                int x = 0;
                for (int k = 0; k + 1 < n; k++)
                    if (a[k] == 0 && a[k + 1] == 0)
                        x++;

                if (x < bst)
                {
                    bst = x;
                    bstps = idx;
                }

                a[idx] = old;
            }
            a[bstps]++;
            str += bst;
        }
        arr[n] = str;
    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        int nm;
        cin >> nm;
        cout << arr[nm] << "\n";
    }

    return 0;
}
