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
        int odd = 1;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x%2 == 0)
                odd = 0;
        }
        if(odd)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}