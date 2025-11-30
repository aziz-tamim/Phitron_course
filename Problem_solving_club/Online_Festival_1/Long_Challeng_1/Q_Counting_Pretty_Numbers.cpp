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
        int l,r;
        cin >> l >> r;
        int cnt =0;
        for(int i=l; i<=r; i++)
        {
            int lst = i%10;
            if(lst ==2 || lst==3 || lst==9)
                cnt++;
        }
        cout<< cnt << '\n';
    }
    return 0;
}