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
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x%2 !=0)
                cnt++;
        }
        int lgc = n-(cnt/2);
        if(cnt ==0)
            cout << 0 << "\n";
        else
            cout << lgc << '\n';
    }
    return 0;
}