#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        int n;
        cin >> n;
        int allxor =0;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            allxor ^=x;
            a[i] =x;
        }
        int smxor = allxor;
        for(int i=0; i<n; i++)
        {
            smxor = min(smxor, allxor ^a[i]);
        }
        cout << smxor << '\n';
    }
    return 0;
}