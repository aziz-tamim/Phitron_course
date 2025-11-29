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
        int n;
        cin >> n;
        bool prim = true;
        if(n<=1)
            prim = false;
        else
        {
            for(int i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    prim = false;
                    break;
                }
            }
        }
        if(prim)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    return 0;
}