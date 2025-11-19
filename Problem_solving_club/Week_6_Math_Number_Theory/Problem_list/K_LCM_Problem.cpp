#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--)
    {
        long long x,y;
        cin >> x >> y;
        if(2*x<=y)
            cout << x << " " << 2*x << "\n";
        else
            cout << -1 << " " << -1 << "\n";
    }
    return 0;
}

