#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        int black_first = -1, black_last = -1;
        for(int i=0; i<n; i++)
        {
            if(st[i] == 'B')
            {
                if(black_first == -1)
                    black_first = i;
                black_last = i;
            }
        }
        int ans = black_last - black_first + 1;
        cout << ans << '\n';
    }
    return 0;
}