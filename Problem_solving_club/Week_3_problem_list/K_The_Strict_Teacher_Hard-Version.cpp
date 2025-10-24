#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        vector<long long> techer(b);
        for(int i=0; i<b; i++)
            cin >> techer[i];
        sort(techer.begin(), techer.end());

        while(c--)
        {
            long long x;
            cin >> x;
            auto it = lower_bound(techer.begin(), techer.end(), x);

            long long ans;
            if(it == techer.begin())
                ans = *(it) -1;
            else if(it == techer.end())
                ans = a - *(prev(it));
            else
            {
                long long dan = *(prev(it));
                long long bam = *(it);
                ans = (bam -dan)/2;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}