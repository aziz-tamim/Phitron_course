#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        string tem;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != ' ')
            {
                tem += s[i];
            }
        }
        sort(tem.begin(),tem.end());
        cout << tem << endl;
    }
    
    return 0;
}