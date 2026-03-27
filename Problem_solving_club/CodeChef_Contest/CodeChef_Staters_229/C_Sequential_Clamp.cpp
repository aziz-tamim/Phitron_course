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
        int n;
        cin >> n;
        int y = 500;
        for(int i=0; i<n; i++)
        {
            int a, b;
            cin >> a >> b;
            if(y<a)
                y = a;
            else if(y>b)
                y = b;
        }
        cout << y << nl;
    }
    return 0;
}