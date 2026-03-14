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
    int star = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=star;j++)
        {
            cout << "*";
        }
        cout << nl;
        star++;
    }
    return 0;
}