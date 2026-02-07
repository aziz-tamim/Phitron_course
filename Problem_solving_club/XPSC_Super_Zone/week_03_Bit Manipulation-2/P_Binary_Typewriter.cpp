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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = 0;
        char curr = '0';
        for(int i=0; i<n; i++)
        {
            if(str[i] != curr)
                ans++;
            curr= str[i];
        }
        if(ans >= 3)
            cout << n+ans-2 <<nl;
        else if(ans == 2)
            cout << n+ans-1 << nl;
        else
            cout << n+ans<< nl;
    }
    return 0;
}