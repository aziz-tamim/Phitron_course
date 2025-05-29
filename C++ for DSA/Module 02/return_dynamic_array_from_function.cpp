#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    // int a[5]; // static array function theke return hole static arry ke pawa jai na
    int *a = new int[5];  // dynamic array function theke return hole o dynamic array ke pawa jai 
    for(int i=0; i<5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int* x = fun();
    for(int i=0; i<5; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}