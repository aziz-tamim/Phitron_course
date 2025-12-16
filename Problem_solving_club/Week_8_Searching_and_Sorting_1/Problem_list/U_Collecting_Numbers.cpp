#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        int x;
        cin >>x;
        a[x] = i;
    }
    int ans =1;
    for(int i=1;i<=n; i++)
    {
        if(a[i] <a[i-1])
            ans++;
    }
    cout << ans << '\n';
    return 0;
}