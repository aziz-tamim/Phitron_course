#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b>> c;

    int needA = 5-a;
    if(needA <0)
        needA = 0;
        
    int needB = 5-b;
    if(needB <0)
        needB = 0;

    int needC = 5-c;
    if(needC <0)
        needC =0;
    int ans = needA+needB+needC;
    cout << ans << '\n';
    return 0;
}