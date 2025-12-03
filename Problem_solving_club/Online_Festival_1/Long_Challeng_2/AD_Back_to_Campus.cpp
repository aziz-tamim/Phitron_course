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
        int n,k;
        cin >> n >> k;
        int ans = n/k;
        if(n%k !=0)
            ans++;
        cout << ans << '\n';
    }
    return 0;
}