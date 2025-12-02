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
        string s;
        cin >> s;
        int cnt1=0, cnt2=0;
        for(char c : s)
        {
            if( c== '0')
                cnt1++;
            else
                cnt2++;
        }
        if(cnt1==1 || cnt2==1)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}