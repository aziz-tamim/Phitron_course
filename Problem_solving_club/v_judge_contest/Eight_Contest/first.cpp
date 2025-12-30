#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin >> x >> y;
    int cnt;
    if(x<y)
        cnt = x;
    else
        cnt = y;
    x = x-cnt;
    y = y-cnt;
    int ans = (cnt*5)+(x*1)+(y*2);
    cout << ans << "\n";
    return 0;
}