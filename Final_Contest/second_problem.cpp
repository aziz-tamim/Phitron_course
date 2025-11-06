#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    map<long long int, pair<int, int>> maps;
    for (int i = 0; i < n; i++)
    {
        if (maps.find(ar[i]) == maps.end())
        {
            maps[ar[i]].first = i + 1;
        }
        maps[ar[i]].second = i + 1;
    }

    for (auto a : maps)
        cout << a.first << " " << a.second.first << " " << a.second.second << "\n";
    return 0;
}