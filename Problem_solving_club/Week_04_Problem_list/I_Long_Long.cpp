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
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long mxsm = 0;
        int oprtin = 0;
        bool isneg = false;
        for (int i = 0; i < n; i++)
        {
            mxsm += abs(arr[i]);
            if (arr[i] < 0)
            {
                if (isneg == false)
                {
                    oprtin++;
                    isneg = true;
                }
            }
            else if (arr[i] > 0)
                isneg = false;
        }
        cout << mxsm << " " << oprtin << "\n";
    }
    return 0;
}