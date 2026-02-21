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
        vector<int> p(n), a(n);
        for(int i=0; i<n; i++)
            cin >> p[i];
        for(int i=0; i<n; i++)
            cin >> a[i];
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(p[i] == a[j])
                j++;
            else
                i++;
        }
        if(j==n)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}