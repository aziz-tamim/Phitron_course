#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int l,r,d,u;
        cin >> l >> r >> d >> u;
        if(l==r && r==d && d==u)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}