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
    int a,b;
    cin >> a >> b;
    bool found = false;
    for(int i=a; i<=b; i++)
    {
        int n = i;
        bool pos = true;
        while(n>0)
        {
            int dig = n%10;
            if(dig != 4 && dig != 7)
            {
                pos = false;
                break;
            }
            n/=10;
        }
        if(pos)
        {
            cout << i << " ";
            found = true;
        }
    }
    if(!found)
        cout << -1 << nl;
    cout << nl;
    return 0;
}