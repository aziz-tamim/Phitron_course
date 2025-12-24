#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int uniqueCount = 0;
        for (auto it : mp)
        {
            if (it.second == 1)
                uniqueCount++;
        }
        if (uniqueCount == mp.size())
            cout << uniqueCount - 1 << "\n";
        else
            cout << uniqueCount << "\n";
    }
    return 0;
}
