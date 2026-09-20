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
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        bool ok = true;
        int last = n + 1;
        for(int i=0; i<n; i++)
        {
            if(a[i] != i+1)
            {
                if(a[i] < last)
                    last = a[i];
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}