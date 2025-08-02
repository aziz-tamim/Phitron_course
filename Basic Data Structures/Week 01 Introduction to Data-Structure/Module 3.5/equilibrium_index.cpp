#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    int l = 0;
    for(int i=0; i<n; i++)
    {
        int r = sum - l - a[i];
        if(l == r)
        {
            cout << i << endl;
            return 0;
        }
        l = l + a[i];
    }
    cout << -1 << endl;
    return 0;
}