#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int que;
    cin >> n >> que;
    vector<int> arry(n +1);

    vector<vector<int>> pre(n+1);

    vector<int> firs(3,0);
    for (int i=0; i <n; i++)
    {
        pre[i] = firs;
    }

    int i = 1;
    while (i <= n)
    {
        cin >> arry[i];
        pre[i] = pre[i - 1];
        int val = arry[i];
        pre[i][val]++;
        i++;
    }

    for (int i=0; i< que; i++)
    {
        int lef, rig;
        cin >> lef >> rig;

        vector<int> cnt = firs;
        for (int j = 0; j < 3; ++j)
        {
            cnt[j] = pre[rig][j] - pre[lef-1][j];
        }

        int res = 0;
        for (int i = 0; i < 3; i++)
        {
            if (cnt[i] >0)
                res++;
            else
                break;
        }
        cout << res << "\n";
    }
    return 0;
}
