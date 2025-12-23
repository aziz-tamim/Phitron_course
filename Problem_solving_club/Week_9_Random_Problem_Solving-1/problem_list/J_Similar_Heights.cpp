#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int diff = 0;
        for(auto it : mp)
        {
            if(it.second == 1)
                diff++;
        }
        cout << diff << "\n";
    }
    return 0;
}
