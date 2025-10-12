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
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        vector<long long> dp(n); // i index porjonto good array banate minimum operation.

        dp[0] = a[0];
        for(int i=1; i<n; i++)
        {
            long long cost1 = a[i] + dp[i-1];
            if(i-1>=0)
            {
                long long cost2 = abs(a[i]-a[i-1]);
                if(i-2>=0) cost2+=a[i-2];
                if(i-3>=0) cost2+=dp[i-3];
                dp[i] = min(cost1, cost2);
            }
        }
        cout << dp[n-1] << "\n";
    }
    return 0;
}