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
        int n,s;
        cin >> n >> s;
        int totalsum_using_5 = n*5;
        if(totalsum_using_5 >= s)
            cout << n*6 << nl;
        else
        {
            int first_step_usuage_6 = s%(totalsum_using_5);
            int first_step_usuage_5 = n-first_step_usuage_6;
            int ans = first_step_usuage_6 * 5 + first_step_usuage_5 * 6;
            cout << ans << nl;
        }
    }
    return 0;
}