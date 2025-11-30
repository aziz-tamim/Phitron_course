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
        int n;
        cin >> n;
        if(n >= 21)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}