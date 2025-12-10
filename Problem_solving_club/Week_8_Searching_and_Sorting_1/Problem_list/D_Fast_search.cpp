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
    long long q;
    cin >> q;
    while(q--)
    {
        long long x,y;
        cin >> x >> y;
        int l=0, r=n-1, left=n, right = n;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid] >= x)
            {
                left = mid;
                r = mid -1;
            }
            else
                l = mid+1;
        }
        l=0, r=n-1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(a[mid] > y)
            {
                right = mid;
                r = mid -1;
            }
            else
                l = mid +1;
        }
        cout << right - left << " ";
    }

    return 0;
}