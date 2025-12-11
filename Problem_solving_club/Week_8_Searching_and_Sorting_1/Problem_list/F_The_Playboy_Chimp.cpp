#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    while(q--)
    {
        ll key;
        cin >> key;
        ll l=0, r=n-1, ans = -1;
        while(l <=r)
        {
            int mid = (l+r)/2;
            if(a[mid] < key)
            {
                ans = a[mid];
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        l =0, r= n-1;
        ll scans = -1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(a[mid] > key)
            {
                scans = a[mid];
                r = mid-1;
            }
            else
                l = mid +1;
        }
        if(ans == -1)
            cout << "X ";
        else
            cout << ans << " ";
        if(scans == -1)
            cout << "X" << "\n";
        else
            cout << scans << "\n";
    }
    return 0;
}