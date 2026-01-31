// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        vector<int> a(n),b(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];        
        vector<bool> parbo(n);
        ll mx = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] > mx)
            {
                parbo[i] = true;
                mx = a[i];
            }
        }
        bool ok = true;
        for(int i=0; i<n; i++)
        {
            if(parbo[i])
            {
                if(a[i] > b[i])
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                if(a[i] != b[i])
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}