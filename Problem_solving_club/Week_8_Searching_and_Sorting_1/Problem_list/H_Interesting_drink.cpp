#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int q;
    cin >>q;
    while(q--)
    {
        int x;
        cin >> x;
        int l=0, r=n-1, ans = -1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid] <= x)
            {
                ans = mid;
                l = mid+1;
            }
            else
                r = mid - 1;
        }
        cout << ans+1 << "\n";
    }
    return 0;
}
