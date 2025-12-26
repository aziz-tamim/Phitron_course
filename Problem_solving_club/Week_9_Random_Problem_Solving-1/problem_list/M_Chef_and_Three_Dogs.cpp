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
        double n,m;
        cin >> n >> m;
        double ans = (2*n)/(3*m);
        cout <<fixed << ans << "\n";
    }
    return 0;
}