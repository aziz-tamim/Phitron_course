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
        int nm;
        cin >> nm;
        vector<int> arr(nm);
        for (int i = 0; i < nm; i++)
            cin >> arr[i];

        int ops = 0;
        int i = 0;
        while (i < nm - 1)
        {
            int j = i;
            while (j + 1 < nm && arr[j + 1] == arr[i])
                j++;
            int len = j - i + 1;
            ops += len / 2;
            i = j + 1;
        }
        cout << ops << "\n";
    }
    return 0;
}
