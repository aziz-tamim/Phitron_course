#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    map<long long,int> mp;
    long long lft = 0, rigt = 0;
    long long ans =0;
    for(int i=0; i<n; i++) 
    {
        lft += arr[i];
        mp[lft]++;
    }
    for(int i=n-1; i>=0; i--)
    {
        mp[lft]--;
        if(mp[lft] == 0)
            mp.erase(lft);
        lft = lft- arr[i];
        rigt = rigt + arr[i];
        if(mp.count(rigt))
            ans = max(ans, rigt);
    }
    cout << ans << "\n";
    return 0;
}