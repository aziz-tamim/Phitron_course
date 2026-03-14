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
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,m;
        cin >> n >> m;
        int sum = 0;
        if(n<m)
        {
            for(int i=n+1; i<m; i++)
            {
                if(i%2 !=0)
                    sum += i;
            }
        }
        else
        {
            for(int i=m+1; i<n; i++)
            {
                if(i%2 != 0)
                    sum += i;
            }
        }
        cout << sum << nl;
    }
    return 0;
}