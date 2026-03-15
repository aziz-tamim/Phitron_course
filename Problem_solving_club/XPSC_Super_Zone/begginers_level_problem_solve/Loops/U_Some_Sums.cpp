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
    int n,a,b;
    cin >> n >> a >> b;
    int ans =0;
    for(int i=1; i<=n; i++)
    {
        int x = i;
        int sum = 0;
        while(x>0)
        {
            sum += x%10;
            x /= 10;
        }
        if(sum >= a && sum <= b)
            ans += i;
    }
    cout << ans << nl;
    return 0;
}