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
        vector<string> ovr(6);
        for (int i = 0; i < 6; i++)
            cin >> ovr[i];
        bool best = false;
        for (int i = 0; i <= 3; i++)
        {
            if (ovr[i] == "W" && ovr[i + 1] == "W" && ovr[i + 2] == "W")
            {
                best = true;
                break;
            }
        }
        if (best)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}