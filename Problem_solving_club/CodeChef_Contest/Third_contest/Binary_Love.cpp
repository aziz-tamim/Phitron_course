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
        string s;
        cin >> n >> s;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
                cnt1++;
            if (s[i] == '1' && s[i + 1] == '0')
                cnt2++;
        }

        if (cnt1+cnt2 >= 2)
            cout << "Alice" << "\n";
        else
            cout << "Bob" << "\n";
    }
    return 0;
}
