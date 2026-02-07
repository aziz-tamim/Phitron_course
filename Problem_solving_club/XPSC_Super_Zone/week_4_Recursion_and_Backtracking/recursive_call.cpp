// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
void print(int n)
{
    if(n == 0)
        return;
    cout << n << sp;
    print(n-1);
    print(n-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    print(n);
    return 0;
}
