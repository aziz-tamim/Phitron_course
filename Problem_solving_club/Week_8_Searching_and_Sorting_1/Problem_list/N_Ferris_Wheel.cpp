#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int l=0, r=n-1, ans =0;
    while(l<=r)
    {
        if(a[l] +a[r] <=m)
            l++;
        r--;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}