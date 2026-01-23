#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int maxN = n+1;
    vector<bool> prime(maxN+1, true);
    for(int i=2; i*i <=maxN; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=maxN; j+=i)
                prime[j] = false;
        }
    }
    if(n<=2)
    {
        cout << 1 << "\n";
        for(int i=0; i<n; i++)
            cout << 1 << " ";
        return 0;
    }
    cout << 2 << "\n";
    for(int i=2; i<=n+1; i++)
    {
        if(prime[i])
            cout << 1 <<" ";
        else
            cout << 2 << " ";
    }
    return 0;
}
