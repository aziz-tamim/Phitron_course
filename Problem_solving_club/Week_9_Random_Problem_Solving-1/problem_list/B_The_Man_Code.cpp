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
        int mx = (n+1)/2;
        int min = (n+2)/3;
        cout << mx << " " << min << "\n";
    }
    return 0;
}