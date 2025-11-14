#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 0; i<tc; i++)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            arr[i] = {a, b};
        }
        sort(arr.begin(), arr.end());

        pbds<int> pb;
        ll ans = 0;
        for (auto &x : arr)
        {
            int b = x.second;
            ans += pb.size()-pb.order_of_key(b);
            pb.insert(b);
        }
        cout << ans << "\n";
    }
}
