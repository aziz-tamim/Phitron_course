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
        vector<int> a(n+1);
        for(int i=1; i<=n; i++)
            cin >> a[i];
        bool ok = false;
        for(int i=1; i<=n; i++)
        {
            if(a[1] != a[i])
            {
                ok = true;
                break;
            }
        }
        if(ok)
        {
            int city = -1;
            cout << "YES" << nl;
            for(int i=2; i<=n; i++)
            {
                if(a[1] != a[i])
                {
                    cout << 1 << sp << i << nl;
                    city = i;
                }
            }
            for(int i=2; i<=n; i++)
            {
                if(a[i] == a[1])
                    cout << city << sp << i << nl;
            }
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}