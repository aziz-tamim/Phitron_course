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
    int max = a[0];
    int minimum = 0, maximum = 0;
    for(int i= 1; i<n;i++)
    {
        if(a[i] < mini)
        {
            mini = a[i];
            minimum = i;
        }
        if(a[i] > max)
        {
            max = a[i];
            maximum = i;
        }
    }
    swap(a[minimum], a[maximum]);
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}