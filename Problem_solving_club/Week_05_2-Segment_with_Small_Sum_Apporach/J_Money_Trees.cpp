#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        vector<long long> a(n), b(n);
        for(auto &x : a)
            cin >> x;
        for(auto &x : b)
            cin >> x;
        int ans = 0;
        int l=0;
        long long sum = 0;
        for(int r=0; r<n; r++)
        {
            if(r>0 && b[r-1]%b[r] !=0)
            {
                l = r;
                sum = 0;
            }
            sum += a[r];
            while(sum > k && l<=r)
            {
                sum -= a[l];
                l++;
            }
            ans = max(ans, r-l+1);
        }
        cout << ans << "\n";
    }
    return 0;
}