#include<bits/stdc++.h>
using namespace std;

void solve(int tt)
{
    int n;
    cin >> n;
    int x = n;
    cout << 2 << "\n";
    for(int i=n-1; i>=1; i--)
    {
        cout << i << " " << x << "\n";
        x = ceil((x+i) / 2.0);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    for(int tt = 1; tt <= tc;tt++)
    {
        solve(tt);
    }
    return 0;
}