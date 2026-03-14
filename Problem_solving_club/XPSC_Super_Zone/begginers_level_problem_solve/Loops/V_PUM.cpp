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
    int num = 1;
    for(int i=0; i<n; i++)
    {
        cout << num << sp << num+1 << sp << num+2 << sp << "PUM" << nl;
        num+=4;
    }
    return 0;
}