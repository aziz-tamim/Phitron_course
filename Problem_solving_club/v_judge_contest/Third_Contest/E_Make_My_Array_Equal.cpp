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
        int nm;
        cin >> nm;
        vector<int> arr(nm);
        map<int, int> mp;
        for (int i = 0; i < nm; i++)
        {
            cin >> arr[i];
            if (arr[i] != 0)
                mp[arr[i]]++;
        }
        int cnt = mp.size();
        if (cnt == 1 || cnt == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}