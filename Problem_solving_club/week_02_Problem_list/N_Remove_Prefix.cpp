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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        
        set<int> st;
        int cnt = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(st.count(arr[i]))
                break;
            st.insert(arr[i]);
            cnt++;
        }
        int ans = n - cnt;
        cout << ans << "\n";
    }
    return 0;
}