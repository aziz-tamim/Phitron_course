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
        int n,m,a,b;
        cin >> n >> m >> a >> b;
        int mndst = n*a;
        int mxdst = n*b;

        if(m<mndst || m>mxdst)
            cout << "No" << "\n";
        else if((m-mndst)%(b-a) == 0)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
    return 0;
}