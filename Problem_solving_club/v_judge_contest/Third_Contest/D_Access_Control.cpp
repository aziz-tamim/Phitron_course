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
        int swp = 0;
        bool flag = true;
        for(int i=0; i<a; i++)
        {
            char c;
            cin >> c;
            if(c == '1')
                swp = b;
            else if(c=='0')
            {
                if(swp>0)
                    swp--;
                else
                    flag = false;
            }
        }
        if(flag)
            cout << "YES" << "\n";
        else
            cout << "NO" << '\n';
    }
    return 0;
}