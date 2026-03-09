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
        ll sum = 0;
        for(int i=0; i<=n; i+=2)
        {
            sum += i;
        }
        cout << sum << nl;
    }
    return 0;
}