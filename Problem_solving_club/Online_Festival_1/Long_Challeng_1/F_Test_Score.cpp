#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(c%b ==0 && c <= a*b)
            cout << "YES" << "\n";
        else
            cout << "NO" << '\n';
    }
    return 0;
}
