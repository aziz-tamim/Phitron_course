#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<pair<int,int>> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
        swap(arr[i].first, arr[i].second);
    }
    sort(arr.begin(), arr.end());
    int ans = 0, last_end = -1;
    for(auto [end, start]: arr)
    {
        if(start >= last_end)
        {
            ans++;
            last_end = end;
        }
    }
    cout << ans << '\n';
    return 0;
}