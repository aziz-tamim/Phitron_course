// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int ans = 0;
        if(n==1)
            ans = 1;
        else if(n==2)
            ans = 9;
        else if(n==3)
            ans = 29;
        else if(n== 4)
            ans = 56;
        else
            ans = 5*(n*n-n-1);
        cout << ans << "\n";
    }
    return 0;
}