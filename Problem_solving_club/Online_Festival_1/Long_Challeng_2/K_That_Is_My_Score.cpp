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
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin >> x >> y;
            if(x >=1 && x<=8)
            {
                if(y>0)
                    ans +=y;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}