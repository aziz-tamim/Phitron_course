#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y)
{
    while(y)
    {
        x %= y;
        swap(x, y);
    }
    return x;
}
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
        vector<long long> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        long long gd = arr[0];
        for(int i = 1; i < n; i++)
            gd = gcd(gd, arr[i]);

        long long x = 2;
        while(gcd(x, gd) !=1)
            x++;
        cout << x << "\n";
    }

    return 0;
}
