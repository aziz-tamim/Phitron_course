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
        int a,b,c;
        cin >> a >> b >> c;
        int total_time = 360+2*a;
        int ans = total_time - (b+c);
        cout << ans << '\n';
    }
    return 0;
}