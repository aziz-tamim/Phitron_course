#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        vector<ll> a(n);
        ll sum =0;
        for(int i=0; i<n;i++)
        {
            cin >> a[i];
            sum+= a[i];
        }
        if(sum%n !=0)
        {
            cout << "Impossible" << '\n';
            continue;
        }
        ll alis= sum/n;
        int ans = -1;
        for(int i=0; i<n; i++)
        {
            if(a[i] == alis)
            {
                ans = i+1;
                break;
            }
        }
        if(ans == -1)
            cout << "Impossible" << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}