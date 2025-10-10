#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int n; cin >> n && n != 0;)
    {
        int cnt = n * (n+1)*( 2* n + 1) / 6;
        cout << cnt << '\n';
    }
    return 0;
}