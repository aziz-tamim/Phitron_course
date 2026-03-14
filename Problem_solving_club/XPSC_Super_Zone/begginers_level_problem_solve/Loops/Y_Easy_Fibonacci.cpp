// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2; i<n; i++)
    {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    for(int i=0; i<n; i++)
    {
        cout << fibo[i] << sp;
    }
    return 0;
}