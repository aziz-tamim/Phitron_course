#include<bits/stdc++.h>
using namespace std;
void shift_zeros(int a[], int n)
{
    int news[n];
    int idx = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] !=0)
        {
            news[idx] = a[i];
            idx++;
        }
    }
    while(idx < n)
    {
        news[idx] = 0;
        idx++;
    }
    for(int i=0; i<n; i++)
    {
        cout << news[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    shift_zeros(a,n);
    return 0;
}