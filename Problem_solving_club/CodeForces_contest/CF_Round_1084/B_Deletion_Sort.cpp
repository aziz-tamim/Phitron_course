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
        for(int i=0; i<n; i++)
            cin >> a[i];
        bool sorted = true;
        for(int i=0; i<n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                sorted = false;
                break;
            }
        }
        if(sorted)
            cout << n << nl;
        else
            cout << 1 << nl;
    }
    return 0;
}