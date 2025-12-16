#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int,int>> a;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin >> x >> y;
        a.push_back({x,1});
        a.push_back({y,-1});
    }
    sort(a.begin(),a.end());
    int maxi =0, ans = 0;
    for(int i=0; i<a.size(); i++) 
    {
        maxi += a[i].second;
        ans = max(ans, maxi);
    }
    cout << ans << '\n';
    return 0;
}