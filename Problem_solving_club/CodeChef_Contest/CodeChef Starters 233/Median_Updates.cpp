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
        string s;
        cin >> s;
        bool right = true;
        for(int i=1; i<n; i++)
        {
            if(s[i] != s[0])
                right = false;
        }
        if(right)
        {
            cout << 1 <<nl;
            continue;
        }
        bool brun = true;
        for(int i=0; i<n; i++)
        {
            if(s[i] == s[(i+1)%n])
                brun = false;
        }
        if(brun)
        {
            cout << -1 << nl;
            continue;
        }
        int ans = 0, cnt = 1;
        for(int i=1; i<2*n; i++)
        {
            if(s[i%n] == s[(i-1)%n])
            {
                ans = max(ans,cnt);
                cnt = 1;
            }
            else
                cnt++;
        }
        ans = max(ans,cnt);
        int finl =(ans+1)/2;
        cout << finl << nl;
    }
    return 0;
}