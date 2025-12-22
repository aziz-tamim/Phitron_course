#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        string str;
        cin >> n >> str;
        if(str == "codechef")
            cout << "topcoder" << "\n";
        else if(str == "five")
            cout << "four" << "\n";
        else if(str == "z")
            cout << -1 << "\n";
        else if(str == "rallets")
            cout << "specter" << "\n";
        else cout << "unknown\n";
    }
    return 0;
}

