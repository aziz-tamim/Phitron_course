#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    map<long long, int> mp;
    mp[0] = 1;
    long long pre = 0, ans=0;
    for(int i=0; i<n; i++)
    {
        pre += arr[i];
        if(mp.count(pre-k))
            ans += mp[pre-k];
        mp[pre]++;
    }
    cout << ans << "\n";
    return 0;
}