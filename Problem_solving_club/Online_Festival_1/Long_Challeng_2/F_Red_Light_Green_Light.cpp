#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int x,y;
        cin >> x >> y;
        int cnt = 0;
        for(int i=0; i<x; i++)
        {
            int a;
            cin >> a;
            if(a>y)
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}