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
        int num;
        string str, t;
        cin >> num >> str >> t;

        sort(str.begin(), str.end());
        sort(t.begin(), t.end());

        if (str == t)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}