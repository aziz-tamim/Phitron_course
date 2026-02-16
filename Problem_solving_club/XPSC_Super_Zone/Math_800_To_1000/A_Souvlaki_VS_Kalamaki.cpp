// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        bool ok = true;
        for(int i=1; i<n-1; i+=2)
        {
            if(arr[i] != arr[i+1])
            {
                ok = false;
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
