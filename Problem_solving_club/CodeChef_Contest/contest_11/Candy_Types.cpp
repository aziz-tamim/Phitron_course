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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];

        vector<int> freq(n+1,0);
        for(int i=0; i<n; i++)
            freq[arr[i]]++;
        int ans = 1;
        for(int i=0; i<=n; i++)
        {
            if(freq[i] > freq[ans])
                ans = i;
        }
        cout << ans << "\n";
    }
    return 0;
}