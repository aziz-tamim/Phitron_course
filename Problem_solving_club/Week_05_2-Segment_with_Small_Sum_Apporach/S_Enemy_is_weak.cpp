/// TLE APPROCH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i=0; i<n; i++)
//         cin >> a[i];

//     ll ans =0;
//     for(int j=1; j<=n-1; j++)
//     {
//         int l =0, r=0;
//         for(int i=0; i<j; i++)
//         {
//             if(a[i] > a[j])
//                 l++;
//         }
//         for(int k=j+1; k<n; k++)
//         {
//             if(a[k] < a[j])
//                 r++;
//         }
//         ans += 1LL * l * r;
//     }
//     cout << ans << "\n";
//     return 0;
// }

/// TLE APPROCH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (auto &x : arr)
//         cin >> x;
//     ll ans = 0;
//     for (int j = 1; j < n - 1; j++)
//     {
//         int l = count_if(arr.begin(), arr.begin() + j, [&](int x)
//                          { return x > arr[j]; });
//         int r = count_if(arr.begin() + j + 1, arr.end(), [&](int x)
//                          { return x < arr[j]; });
//         ans += 1LL * l * r;
//     }
//     cout << ans << "\n";
// }

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int > a(n);
    for(auto &x :a)
        cin >> x;
    ll ans =0;

    pbds<int> ls, rs;
    for(auto x :a)
        rs.insert(x);
    for(int j=0; j<n; j++)
    {
        rs.erase(a[j]);
        ll lb = ls.size() - ls.order_of_key(a[j]);
        ll rsm = rs.order_of_key(a[j]);
        ans += lb*rsm;
        ls.insert(a[j]);
    }
    cout << ans << "\n";
    return 0;
}