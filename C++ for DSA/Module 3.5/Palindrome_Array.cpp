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
    int l = 0, r = n-1;
    int palindrome = 1;
    while(l<r)
    {
        if(a[l] != a[r])
        {
            palindrome = 0;
            break;
        }
        l++;
        r--;
    }
    if(palindrome == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}