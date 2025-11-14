#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i<n; i++)
        cin >> arr[i];

    multiset<ll> ms;
    for (int i = 0; i < k; i++)
        ms.insert(arr[i]);

    auto cmcst = [&]()
    {
        auto it = next(ms.begin(), k/2);
        ll median = *it;
        ll cost = 0;
        for (ll val : ms)
            cost += abs(val - median);
        return cost;
    };

    cout << cmcst();
    for (int i = k; i<n; i++)
    {
        ms.erase(ms.find(arr[i -k]));
        ms.insert(arr[i]);
        cout << " " << cmcst();
    }
    cout << "\n";
}
