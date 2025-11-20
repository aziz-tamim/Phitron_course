#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool prime(ll num)
{
    if(num <2)
        return false;
    for(ll i=2; i*i <=num; i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        ll prm1 = n;
        while(prime(prm1) == false)
            prm1++;
        ll prm2 = prm1+1;
        while(prime(prm2) == false)
            prm2++;

        ll ans = prm1* prm2;
        cout << ans << "\n";
    }
    return 0;
}