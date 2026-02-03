// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> arr;
    while(n>0)
    {
        int a = n%10;
        if(a == 4)
            arr.push_back(0);
        else if(a==7)
            arr.push_back(1);
        n = n/10;
    }
    reverse(arr.begin(), arr.end());
    int sz = arr.size();
    ll ans = (1LL << sz) - 2;
    ll val = 0;
    for(int x : arr)
        val = val*2 + x;

    int fnlans = ans +val +1;
    cout << fnlans << "\n";
    return 0;
}