#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n,m;
        cin >> n >> m;
        if(m==1)
        {
            if(n%2 == 0)
                cout << "EVEN" << "\n";
            else
                cout << "ODD" << "\n";
        }
        else
            cout << "EVEN" << "\n";
    }
    return 0;
}
