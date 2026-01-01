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
        vector<ll> arr(n);
        ll mn = LLONG_MAX, mx = LLONG_MIN;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }
        ll x;
        cin >> x;
        if(x>= mn && x <= mx)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}