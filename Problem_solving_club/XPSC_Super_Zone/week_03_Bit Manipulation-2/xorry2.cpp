// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
bool kth_bit_on(int n, int k)
{
    return ((n >> k) & 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int x;
        cin >> x;
        int MSB = __lg(x), b = (1 << MSB),a = (x^b), sum = b, cnt = 0;
        for(int k=0; k<=MSB; k++)
        {
            if(!kth_bit_on(a,k) && !kth_bit_on(b,k) && (sum+(1<<k)) <= x)
            {
                cnt++;
                sum += (1<<k);
            }
        }
        int ans = (1 << cnt);
        cout << ans << '\n';
    }
    return 0;
}