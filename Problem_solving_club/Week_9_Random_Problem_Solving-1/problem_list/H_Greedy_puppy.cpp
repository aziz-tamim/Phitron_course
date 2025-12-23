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
        int n,m;
        cin >> n >> m;
        int cnt = 0;
        for(int i=1; i<=m; i++)
        {
            int divi = n%i;
            cnt = max(cnt, divi);
        }
        cout << cnt << '\n';
    }
    return 0;
}