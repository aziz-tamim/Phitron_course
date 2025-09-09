// problem link --> https://leetcode.com/problems/fibonacci-number/description/
#include<bits/stdc++.h>
using namespace std;
long long dp[32];
long long fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(dp[n] != -1)
        return dp[n];
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];

}
int main()
{
    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    cout << fib(n);
    return 0;
}