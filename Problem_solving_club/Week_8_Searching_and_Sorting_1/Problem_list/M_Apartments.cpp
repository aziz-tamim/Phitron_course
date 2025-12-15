#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,l;
    cin>> n >> m >> l;
    vector<ll> a(n),b(m);
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i=0,j=0, ans = 0;
    while(i<n && j<m)
    {
        if(b[j] <a[i]-l)
            j++;
        else if(b[j] > a[i] + l)
            i++;
        else
        {
            ans++;
            i++;
            j++;
        }
    }
    cout << ans << "\n";
    return 0;
}