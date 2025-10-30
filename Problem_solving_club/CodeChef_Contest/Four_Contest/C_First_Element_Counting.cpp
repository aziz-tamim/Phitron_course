#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int num;
        cin >> num;
        vector<pair<long long,int>> arr(num);
        for (int i =0; i <num; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i;
        }

        sort(arr.begin(), arr.end());
        vector<long long> ans(num, 0);
        for (int i = 0; i < num; i++)
        {
            if (i == 0 || i == num -1)
                ans[arr[i].second] = -1;
            else {
                long long leftmd = (arr[i - 1].first + arr[i].first)/ 2;
                long long rightmd = (arr[i].first + arr[i + 1].first)/ 2;
                long long l = leftmd + 1;
                long long r = rightmd;

                long long cnt = r-l + 1;
                if(cnt < 0)
                    cnt = 0;
                ans[arr[i].second] =cnt;
            }
        }
        for(auto x : ans)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
