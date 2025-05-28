#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
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
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}