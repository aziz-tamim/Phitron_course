#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    for(int i=0; i<q; i++)
    {
        int key;
        cin >> key;
        int l=0, r=n-1, mid, ans =-1;
        while(l <=r)
        {
            mid = l+(r-l)/2;
            if(a[mid] == key)
            {
                ans = mid;
                r = mid-1;
            }
            else if(key < a[mid])
                r = mid -1;
            else
                l = mid + 1;
        }
        if(ans == -1)
            cout << key << " not found" << "\n";
        else
            cout << key << " found at " << ans + 1<< "\n";
    }
    return 0;
}