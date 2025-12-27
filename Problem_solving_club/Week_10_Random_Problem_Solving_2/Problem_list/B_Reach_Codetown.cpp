#include<bits/stdc++.h>
using namespace std;
bool vowel(char c)
{
    return c == 'A'||c =='E'||c == 'I'|| c=='O' || c=='U';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    string tgr = "CODETOWN";
    while(tc--)
    {
        string s;
        cin >>s;
        bool poss = true;
        for(int i=0; i<8;i++)
        {
            if(vowel(s[i]) != vowel(tgr[i]))
                poss = false;
        }
        if(poss == true)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}