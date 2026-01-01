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
        int ans = 0;
        int i=0;
        while(i<n)
        {
            if(arr[i] == i+1)
            {
                int cnt =0;
                while(i<n && arr[i]==i+1)
                {
                    cnt++;
                    i++;
                }
                ans += (cnt+1)/2;
            }
            else
                i++;
        }
        cout << ans << "\n";
    }
    return 0;
}
