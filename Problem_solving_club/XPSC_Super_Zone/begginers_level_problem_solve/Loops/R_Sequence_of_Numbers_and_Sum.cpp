// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    while(1)
    {
        cin >> n >> m;
        if(n<=0 || m<=0)
            break;
        if(n<m)
        {
            int sum = 0;
            for(int i=n; i<=m; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum ="<< sum << nl;
        }
        else
        {
            int sum = 0;
            for(int i=m; i<=n; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum ="<< sum << nl;
        }
    }
    return 0;
}