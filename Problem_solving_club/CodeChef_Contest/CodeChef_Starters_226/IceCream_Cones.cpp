// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        int x,y,n;
        cin >> x >> y >> n;
        int rem = x-y*n;
        if(rem < 0)
            rem = 0;
        cout << rem << nl;
    }
    return 0;
}