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
        int a, b;
        cin >> a >> b;
        vector<int> arr(a);
        map<int, int> fst, lst;

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (fst.find(arr[i]) == fst.end())
                fst[arr[i]] = i;
            lst[arr[i]] = i;
        }
        for (int i = 0; i < b; i++)
        {
            int x, y;
            cin >> x >> y;
            if (fst.find(x) == fst.end() || fst.find(y) == fst.end())
                cout << "NO" << "\n";
            else if (fst[x] <= lst[y])
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }
    return 0;
}
