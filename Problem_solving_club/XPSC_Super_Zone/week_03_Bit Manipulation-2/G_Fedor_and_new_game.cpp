// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin >> x >> y >> z;
    vector<int> a(y+1);
    for(int i=0; i<=y; i++)
        cin >> a[i];

    int man = a[y];
    int ans = 0;
    for(int i=0; i<y; i++)
    {
        int dif = a[i] ^ man;
        int bits = __builtin_popcount(dif);
        if(bits <= z)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
