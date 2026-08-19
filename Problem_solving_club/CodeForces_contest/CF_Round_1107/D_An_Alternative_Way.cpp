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
        vector<long long> a(n), b(n);
        for(int i = 0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        
        ll pre = 0;
        bool ok = true;
        for(int i=0; i<n; i++)
        {
            pre += (b[i] - a[i]);
            if(pre < 0)
                ok = false;
        }
        if(ok)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}