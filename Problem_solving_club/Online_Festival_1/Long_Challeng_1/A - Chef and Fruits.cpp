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
        int diff = abs(a-b);
        int ans = max(0,diff-c);
        cout << ans << '\n';
    }
    return 0;
}