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
        int odd =0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x%2 !=0)
                odd++;
        }
        if(n==1)
        {
            cout << 1 << '\n';
            continue;
        }
        if(odd%2 == 0)
            cout << 1 << '\n';
        else    
            cout << 2 << '\n';
    }
    return 0;
}