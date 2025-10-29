#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt =0;
        int i=0;
        while(i < n)
        {
            if(s[i] == 'B')
            {
                cnt++;
                i+= k;
            }
            else
                i++;
        }
        cout << cnt << "\n";
    }
    return 0;
}