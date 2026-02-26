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
        int n,a,b;
        cin >> n >> a >> b;
        int ans = n;
        while(ans >= a)
        {
            ans = ans-(a-b);
        }
        cout << ans << nl;
    }
    return 0;
}