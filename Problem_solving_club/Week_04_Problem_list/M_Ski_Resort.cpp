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
        long long n, tg, q;
        cin >> n >> tg >> q;
        
        vector<long long> arr(n);
        for(int i=0; i<n; i++) 
            cin >> arr[i];
        long long sum = 0, len = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] <= q)
               len++;
            else
            {
                if(len >= tg)
                    sum += 1LL * (len-tg+1)*(len - tg+2)/2;
                len = 0;
            }
        }
        if(len >=tg)
            sum += 1LL *(len-tg+1)* (len-tg+2)/2;
        cout << sum << "\n";
    }
    return 0;
}