#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    multiset<int> s;
    for(int i=0; i<n; i++)
    {
        int h;
        cin >> h;
        s.insert(h);
    }
    for(int i=1; i<=m; i++)
    {
        int t;
        cin >> t;
        auto it = s.upper_bound(t);
        if(it == s.begin())
            cout << -1 << "\n";
        else
        {
            it--;
            cout << *it << "\n";
            s.erase(it);
        }
    }
    return 0;
}