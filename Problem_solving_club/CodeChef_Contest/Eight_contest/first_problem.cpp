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
        cin>> a >> b >> c;
        int ans = min({a,b,c});
        int maxi = (a-ans)+(b-ans)+(c-ans);
        int total = ans*10+maxi*3;
        cout << total << '\n';
    }
    return 0;
}