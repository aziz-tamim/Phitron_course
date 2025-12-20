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
        int x,y;
        cin >> x >> y;
        int ans = y%(x+1);
        cout << ans << "\n";
    }
    return 0;
}