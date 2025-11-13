#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;

        bool seen_zero = false;
        int count = 0;

        for (char c : s)
        {
            if (c == '0')
                seen_zero = true;
            else if (c == '1' && seen_zero)
                count++;
        }

        cout << count << "\n";
    }
    return 0;
}
