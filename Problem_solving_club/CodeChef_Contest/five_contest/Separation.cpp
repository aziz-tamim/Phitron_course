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
        long long x;
        cin >> n >> x;

        int lessCnt = 0, greCnt = 0, equCnt = 0;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            if (a < x)
                ++lessCnt;
            else if (a > x)
                greCnt++;
            else
                equCnt++;
        }
        if(lessCnt > 0 && greCnt > 0 && equCnt == 0)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
