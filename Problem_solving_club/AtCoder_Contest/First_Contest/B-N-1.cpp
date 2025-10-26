#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans += arr[i];
    }
    if (find(arr.begin(), arr.end(), ans - m) != arr.end())
        cout << "Yes" << '\n';
    else
        cout << "No" << "\n";

    return 0;
}