// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, terget_val;
//     cin >> n >> terget_val;
//     map<int, int> umap;
//     vector<int> a(n);
//     for(int i=0; i<n; i++)
//         cin >> a[i];

//     for(int i=0; i<n; i++)
//     {
//         int cnt = terget_val - a[i];
//         if(umap.count(cnt))
//         {
//             cout << umap[cnt]+1 << " " << i+1 << "\n";
//             return 0;
//         }
//         umap[a[i]] = i; // key a[i] and value i; value store.
//     }
//     cout << "IMPOSSIBLE" << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int z;
        cin >> z;
        v.push_back({z, i});
    }
    sort(v.begin(), v.end());
    for (int i = 0, j = n - 1; i < j;)
    {
        // long long sum = 1LL * v[i].first + v[j].first;
        if ((1LL * v[i].first + v[j].first) > x)
            j--;
        else if ((1LL * v[i].first + v[j].first) < x)
            i++;
        else
        {
            cout << v[i].second << " " << v[j].second << "\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << "\n";
    return 0;
}