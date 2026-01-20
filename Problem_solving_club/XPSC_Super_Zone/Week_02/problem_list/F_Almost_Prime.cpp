#include<bits/stdc++.h>
using namespace std;
const int maxN = 3005;
vector<int> allPrime;
void sieve()
{
    vector<bool> prime(maxN+1, true);
    for(int i=2; i*i<= maxN; i++)
    {
        if(prime[i])
        {
            for(int j= i*i; j<=maxN; j+= i)
                prime[j] = false;
        }
    }
    for(int i=2; i<=maxN; i++)
    {
        if(prime[i])
        {
            allPrime.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n;
    cin >> n;
    int num = 2;
    int primeCnt = 0;
    while(num <=n) 
    {
        int tmp = num;
        map<int,int> cnt;
        int idx = 0;
        while(tmp > 1 && idx <allPrime.size())
        {
            while(tmp % allPrime[idx] == 0)
            {
                cnt[allPrime[idx]]++;
                tmp /= allPrime[idx];
            }
            idx++;
        }
        if(cnt.size() == 2)
            primeCnt++;
        num++;
    }
    cout << primeCnt << "\n";
    return 0;
}