#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    long long sum = 0;
    int l=0;
    int ans = INT_MAX;
    for(int r=0; r<n; r++)
    {
        sum += a[r];
        while(sum >= k)
        {
            ans = min(ans,r-l+1);
            sum -= a[l];
            l++;
        }
    }
    if(ans == INT_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
    return 0;
}