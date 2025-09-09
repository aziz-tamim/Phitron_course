#include<bits/stdc++.h>
using namespace std;
bool reach_val(long long n)
{
    if(n==1)
        return true;
    if(n<1)
        return false;
    if(n%10 == 0 && reach_val(n/10))
        return true;
    if(n%20 == 0 && reach_val(n/20))
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if(reach_val(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}