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
        cin >> x;
        if(i==0)
            a[i] = x;
        else
            a[i] = a[i-1]+x;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int key;
        cin >> key;
        int l=0, r=n-1, ans = n-1;
        while(l <=r )
        {
            int mid = (l+r)/2;
            if(a[mid] >= key)
            {
                ans = mid;
                r = mid -1;
            }
            else
                l = mid +1;
        }
        cout << ans +1<< '\n';
    }
    return 0;
}