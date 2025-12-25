#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];

        ll ex = 0;
        int cnt = 0;
        vector<int> arr2;
        for(int i=0; i<n; i++)
        {
            if (arr[i] >= m)
            {
                cnt++;
                ex += (arr[i]-m);
            }
            else
                arr2.push_back(m-arr[i]);
        }
        sort(arr2.begin(), arr2.end());
        for(int x : arr2)
        {
            if(ex >= x)
            {
                ex -= x;
                cnt++;
            }
            else
                break;
        }
        cout << cnt << "\n";
    }
    return 0;
}
