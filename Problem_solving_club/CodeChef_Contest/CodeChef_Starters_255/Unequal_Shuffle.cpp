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
        string a, b;
        cin >> a >> b;

        int cntA_a = 0, cntA_b = 0;
        int cntB_a = 0, cntB_b = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] == 'a')
                cntA_a++;
            else
                cntA_b++;
            if(b[i] == 'a')
                cntB_a++;
            else
                cntB_b++;
        }
        if(cntA_a == cntB_b && cntA_b == cntB_a)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}