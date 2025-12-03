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
        int a,b;
        cin >> a >> b;
        string s;
        cin >> s;
        int cnt =0;
        bool right = false;
        for(int i=0;i<a; i++)
        {
            if(s[i] =='*')
                cnt++;
            else
                cnt=0;
            if(cnt >= b)
            {
                right = true;
                break;
            } 
        }
        if(right)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}