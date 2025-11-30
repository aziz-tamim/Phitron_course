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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = INT_MAX;
        for (char a = 'a'; a <= 'z'; a++)
        {
            int l = 0, r = n - 1;
            int cnt = 0;
            bool poss = true;
            while (l < r)
            {
                if (str[l] == str[r])
                {
                    l++;
                    r--;
                }
                else if (str[l] == a)
                {
                    cnt++;
                    l++;
                }
                else if (str[r] == a)
                {
                    cnt++;
                    r--;
                }
                else
                {
                    poss = false;
                    break;
                }
            }
            if (poss)
                ans = min(ans, cnt);
        }
        if(ans == INT_MAX)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
    return 0;
}