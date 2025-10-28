#include <bits/stdc++.h>
using namespace std;

bool isvowl(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        string tgrvl = "CODETOWN";
        bool istrue = true;
        for (int i = 0; i < 8; i++)
        {
            if (isvowl(str[i]) != isvowl(tgrvl[i]))
            {
                istrue = false;
                break;
            }
        }
        if(istrue)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}
