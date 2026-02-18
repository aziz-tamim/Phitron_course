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
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int ok = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] == 67)
            {
                ok = 1;
                break;
            }
        }
        if(ok)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}