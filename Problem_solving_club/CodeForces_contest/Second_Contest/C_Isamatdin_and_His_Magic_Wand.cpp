#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        int oddcnt = 0, evencnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                evencnt++;
            else
                oddcnt++;
        }

        if(oddcnt >0 && evencnt> 0)
            sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << (i + 1 < n ? ' ' : '\n');
        }
    }

    return 0;
}
