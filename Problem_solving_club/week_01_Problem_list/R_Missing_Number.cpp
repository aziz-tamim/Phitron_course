#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n;
    cin >> n;
    long long int sum = n*(n+1)/2;
    long long int missval = 0;
    for(int i=0; i<n-1; i++)
    {
        int val;
        cin >> val;
        missval+= val;
    }
    int ans = sum - missval;
    cout << ans << "\n";
    return 0;
}