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
    int mini = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i] < mini)
        {
            mini = a[i];
        }
    }
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == mini)
        {
            cnt++;
        }
    }
    if(cnt%2 == 1)
    {
        cout << "Lucky\n";
    }
    else
    {
        cout << "Unlucky\n";
    }
    return 0;
}