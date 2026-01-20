#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MaxN = 10000005;
vector<int> allPrime;
void sive()
{
    vector<bool> prime(MaxN+1,true);
    for(int i=2; i*i<=MaxN; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=MaxN; j+= i)
                prime[j] = false;
        }
    }
    for(int i=2; i<=MaxN; i++)
    {
        if(prime[i])
            allPrime.push_back(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sive();
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        for(int x : allPrime)
        {
            if(x > n)
                break;
            ans += n/x;
        }
        cout << ans << "\n";
    }
    return 0;
}