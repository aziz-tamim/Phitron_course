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
        int a, b;
        cin >> a >> b;
        int esy = 0;
        int spi = 0;

        vector<int> coin(a);
        for(int i=0; i<a; i++)
            cin >> coin[i];
        string s;
        cin >> s;
        for(int i=0; i<a; i++)
        {
            if(s[i] == '0')
                esy += coin[i];
            else
                spi += coin[i];
        }
        int ans = esy;
        if(esy >=b && (spi-b) > 0)
            ans += (spi-b);

        cout << ans << '\n';
    }
    return 0;
}
