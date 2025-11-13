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
    long long k;
    cin >> n >> k;
    pbds<int> s;
    for(int i=1; i<=n; i++)
        s.insert(i);
    
    vector<int> ans;
    long long idx =0;
    while(!s.empty())
    {
        idx = (idx+k) % s.size();
        auto it = s.find_by_order(idx);
        ans.push_back(*it);
        s.erase(it);
    }
    for(int x : ans)
        cout << x << " ";
    cout << "\n";
    return 0;
}