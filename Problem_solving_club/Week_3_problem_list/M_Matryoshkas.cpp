#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int num;
        cin >> num;
        vector<int> arr(num);
        for(int &x : arr)
            cin >> x;
        sort(arr.begin(), arr.end());

        map<int,int> freq;
        for(int x : arr)
            freq[x]++;
        int ans = 0;
        int prev = -1;
        int prevcnt = 0;

        for(auto [x, cnt] : freq)
        {
            if(x ==prev+1)
            {
                if(cnt >prevcnt)
                    ans += cnt - prevcnt;
            }
            else
                ans += cnt;
            prev = x;
            prevcnt = cnt;
        }
        cout << ans << "\n";
    }
    return 0;
}
