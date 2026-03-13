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
    int years = n/365;
    int remain_day = n%365;
    int month = remain_day/30;
    int day = remain_day%30;
    cout << years << " years" << nl;
    cout << month << " months" << nl;
    cout << day << " days" << nl;
    return 0;
}