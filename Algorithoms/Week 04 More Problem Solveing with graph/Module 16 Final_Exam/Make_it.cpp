// Problem link --> https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-07/challenges/make-it-2
#include<bits/stdc++.h>
using namespace std;
int dp[100005];
bool make(long long int val)
{
    if(val == 1)
        return true;
    if(val < 1)
        return false;

    if(dp[val] != -1)
        return dp[val];

    int l = false, r = false;
    if(val >=3)
        l = make(val - 3);
    if(val%2 == 0)
        r = make(val / 2);

    dp[val] = l || r;
    return dp[val];
} 
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int n;
        cin >> n;
        memset(dp,-1,sizeof(dp));
        if(make(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}