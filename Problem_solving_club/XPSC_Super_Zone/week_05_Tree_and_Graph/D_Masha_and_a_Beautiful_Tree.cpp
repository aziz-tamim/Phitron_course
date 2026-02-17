// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int ans;
bool dfs(vector<int>& a, int l, int r)
{
    if(l==r)
        return true;
    int mid = (l+r)/2;
    if(dfs(a,l,mid) == false)
        return false;
    if(dfs(a,mid+1, r) == false)
        return false;
    
    int lft_mx = a[l];
    int lft_mn = a[l];
    for(int i=l+1; i<=mid; i++)
    {
        lft_mx = max(lft_mx, a[i]);
        lft_mn = min(lft_mn, a[i]);
    }
    int right_mx = a[mid+1];
    int right_mn = a[mid+1];
    for(int i=mid+2; i<=r; i++)
    {
        right_mx = max(right_mx, a[i]);
        right_mn = min(right_mn, a[i]);
    }
    if(lft_mx < right_mn)
        return true;
    else if(right_mx < lft_mn)
    {
        ans++;
        return true;
    }
    else
        return false;
}
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
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++)
            cin >> arr[i];
        ans =0;
        bool poss = dfs(arr,1,n);
        if(poss)
            cout << ans << nl;
        else
            cout << -1 << nl;
    }
    return 0;
}