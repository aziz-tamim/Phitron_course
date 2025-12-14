#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tc;
    cin >> tc;
    while(tc--)
    {
        ll n,q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i=0; i<n; i++)
            cin >> a[i];

        vector<ll> pre1(n), pre2(n);
        for(int i=0; i<n; i++)
        {
            if(i == 0)
            {
                pre1[i] = a[i];
                pre2[i] = a[i];
            }
            else
            {
                pre1[i] = pre1[i-1] + a[i];
                pre2[i] = max(pre2[i-1], a[i]);
            }
        }
        for(int j =0; j<q; j++)
        {
            ll key, l= 0, r= n-1, ans =-1;
            cin >> key;

            while(l <= r) 
            {
                int mid = (l+r) /2;
                if(pre2[mid] <= key)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            if(ans == -1)
                cout << 0 << " ";
            else
                cout << pre1[ans] << " ";
        }
        cout << "\n";
    }

    return 0;
}
