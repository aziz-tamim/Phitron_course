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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int currln = 1, mxln = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                currln++;
            else
                currln = 1;
            mxln = max(mxln, currln);
        }
        cout << mxln << " ";
        for (int i = 0; i < m; i++)
        {
            char c;
            cin >> c;
            if (!s.empty() && c == s.back())
                currln++;
            else
                currln = 1;
            s.push_back(c);
            mxln = max(mxln, currln);
            cout << mxln << " ";
        }
        cout << "\n";
    }
    return 0;
}