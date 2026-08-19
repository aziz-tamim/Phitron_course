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
        string s;
        cin >> n >> s;
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i] != s[i-1])
                cnt++;
        }
        if(cnt == 2)
            cout << 2 << nl;
        else
            cout << 1 << nl;
    }
    return 0;
}