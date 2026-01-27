// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n), b(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        vector<int> fnl_arr(n);
        fnl_arr[n-1] = max(arr[n-1], b[n-1]);

        for(int i = n-2; i >= 0;i--)
            fnl_arr[i] = max({arr[i], b[i],fnl_arr[i+1]});
        vector<ll> pre(n+1, 0);
        for(int i=0; i<n; i++)
            pre[i+1] = pre[i] + fnl_arr[i];
        while(q--)
        {
            int l, r;
            cin >> l >> r;
            ll sum = pre[r] - pre[l-1];
            cout << sum << " ";
        }
        cout << "\n";
    }
    return 0;
}
