#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> arr(n+1), pre(n+1,0);
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
            pre[i] = pre[i-1] + arr[i];
        }
        long long prev_sum = pre[n];
        while(q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            long long avg_sum = pre[r]-pre[l-1];
            long long sum = prev_sum - avg_sum + 1LL * (r-l+1)*k;
            
            if(sum %2 !=0)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }
    return 0;
}