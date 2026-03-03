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
    int dig_cnt = 0;
    if(n>=1)
        dig_cnt += min(n,9);
    if(n>=100)
        dig_cnt += min(n,999)-99;
    if(n>=10000)
        dig_cnt += min(n,99999)-9999;
    cout << dig_cnt << nl;
    return 0;
}