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
        cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n; i++)
            cin >> arr[i];

        int l = 0, r = n-1;
        int mini = 1, maxi = n;
        while (l <= r)
        {
            if(arr[l] == mini)
            {
                ++l;
                ++mini;
            }
            else if(arr[l] == maxi)
            {
                ++l;
                --maxi;
            }
            else if(arr[r] == mini)
            {
                --r;
                ++mini;
            }
            else if(arr[r] == maxi)
            {
                --r;
                --maxi;
            }
            else
                break;
        }
        if (l <=r)
            cout << l+1 << " " << r+1 << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
