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
        int ans = 0;
        for(int i=0; i<a; i++)
        {
            int x,y,z;
            cin >> x >> y >> z;
            if(z <= b)
            {
                int sid = x*y;
                ans = max(ans, sid);
            }
        }
        if(ans == 0)
            cout << "no tablet" << "\n";
        else
            cout << ans << "\n";
    }
    return 0;
}