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
        int cnt =0;
        while(n>0)
        {
            int x=1;
            while(x*2<=n)
            {
                x*=2;
            }
            n-=x;
            cnt++;
        }
        cout << cnt<< "\n";
    }
    return 0;
}