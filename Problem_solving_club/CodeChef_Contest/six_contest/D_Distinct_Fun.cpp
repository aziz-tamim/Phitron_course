#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        unordered_set<int> seen;
        int ops = 0;
        for (int i = 0; i < n; i++)
        {
            if (seen.count(arr[i]))
            {
                ops++;
                seen.clear();
            }
            seen.insert(arr[i]);
        }
        cout << ops << "\n";
    }
    return 0;
}
