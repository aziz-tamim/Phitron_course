#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(s[i]=='0' && s[i+1]=='0')
                cnt1++;
            if(s[i]=='1' && s[i+1]=='1')
                cnt2++;
        }

        if(cnt2 >= cnt1)
        {
            cout << 0 << "\n";
        }
        else
        {
            int diff = cnt1 - cnt2;
            int flips = (diff + 1) / 2;
            cout << flips << "\n";
        }
    }

    return 0;
}
