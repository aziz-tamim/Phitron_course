// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
void solve(int test_case)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=n-1,flag=1, choto=1, boro=n; i>=0; i--, flag^=1)
    {
        v[i] = flag ? choto++ : boro--;

    }
    for(int i=0; i<n; i++)
    {
        cout << v[i] << sp;
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve(tc);
    }
    return 0;
}