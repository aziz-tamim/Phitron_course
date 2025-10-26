#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int num;
        cin >> num;
        vector<int> arr(num);
        for (int i = 0; i < num; i++)
            cin >> arr[i];

        vector<int> disct(num, 0);
        vector<int> freq(num + 1, 0);
        int cnt = 0;
        for (int i = 0; i < num; i++)
        {
            if (freq[arr[i]] == 0)
                cnt++;
            freq[arr[i]]++;
            disct[i] = cnt;
        }

        for(int i = 0; i <= num; i++)
        {
            freq[i] = 0;
        }
        int total = 0;
        int ans = 0;
        int r = num - 1;
        for (int i = num - 1; i >= 0; i--)
        {
            if (freq[arr[i]] == 0)
                total++;
            freq[arr[i]]++;
            if (total == disct[r])
            {
                ans++;
                for (int j = i; j <= r; j++)
                    freq[arr[j]] = 0;
                total = 0;
                r = i - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
