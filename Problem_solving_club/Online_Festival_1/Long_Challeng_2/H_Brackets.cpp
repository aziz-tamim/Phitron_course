#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        int par =0;
        int top_par=0;
        for(char c: s)
        {
            if(c == '(')
                par++;
            else
                par--;
            if(par > top_par)
                top_par = par;
        }
        int ans = top_par;
        for(int i=0; i<ans; i++)
            cout << '(';
        for(int i=0; i<ans; i++)
            cout << ')';
        cout << '\n';
    }
    return 0;
}