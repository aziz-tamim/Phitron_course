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
        int num;
        string str;
        cin >> num >> str;

        int blnc = 0;
        bool done = true;
        for(char c : str)
        {
            if (c == '0')
                blnc++;
            else
                blnc--;
            if (blnc < 0)
                done = false;
        }
        if (done && blnc == 0)
        {
            cout << 0 << "\n";
            continue;
        }

        int pre_blnc = 0, curr = 0;
        for (char c : str)
        {
            if (c == '0')
                curr++;
            else
                curr--;
            pre_blnc = max(pre_blnc, -curr);
        }

        int suf_blnc = 0;
        curr = 0;
        for (int i = num-1; i>= 0;i--)
        {
            if (str[i] == '1')
                curr++;
            else
                curr--;
            suf_blnc = max(suf_blnc, -curr);
        }

        int ans = max(pre_blnc > 0, suf_blnc > 0) ? ((pre_blnc > 0 && suf_blnc > 0) ? 2 : 1) : 0;
        cout << ans << "\n";
    }
    return 0;
}
