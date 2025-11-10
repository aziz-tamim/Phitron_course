// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using namespace std;
// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     pbds<pair<int, int>> p;
//     for (int i = 1; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         p.insert({x, i});
//     }
//     p.erase({3,6});
//     for (auto [x, y] : p)
//     {
//         cout << x << " " << y << '\n';
//     }
//     cout << '\n';
//     return 0;
// }

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios_base::sync_with_stdio(false); // order_of_key, find_by_order
    cin.tie(nullptr);
    int n;
    cin >> n;
    pbds<int> p;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    int x = p.order_of_key(4);
    cout << x << "\n";
    cout << "\n";

    // auto it = p.find_by_order(3);
    // cout << *it << "\n";

    for (auto value : p)
    {
        cout << value << " ";
    }
    cout << '\n';
    return 0;
}