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
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    ll ans = 1, nut = 0, zero= 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)
        {
            nut++;
            if(nut > 1)
                ans *= (zero+1);
            zero = 0;
        }
        else
        {
            if(nut >= 1)
                zero++;
        }
    }
    if(nut == 0)
        cout << 0 << nl;
    else
        cout << ans << nl;
    return 0;
}