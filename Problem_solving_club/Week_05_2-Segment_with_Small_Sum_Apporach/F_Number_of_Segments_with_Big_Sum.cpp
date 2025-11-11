#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    long long sum = 0;
    int l=0;
    long long cnt = 0;
    for(int r=0; r<n; r++)
    {
        sum += a[r];
        while(sum >= k)
        {
            cnt += (n-r);
            sum -= a[l];
            l++;
        }
    }
    cout << cnt << '\n';
    return 0;
}