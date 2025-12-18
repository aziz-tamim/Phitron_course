#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for(int i =0; i<n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if(sum >= 0)
            cout << 0 << "\n";
        else
        {
            int ans = (-sum + n-1) /n;
            cout << ans << "\n";
        }
    }
    return 0;
}
