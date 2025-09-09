#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n) // O(2^n)
{
    if(n==0 || n==1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}