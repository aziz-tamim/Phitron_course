#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> towr;
    for(int i=0; i<n; i++)
    {
        int cube;
        cin >> cube;
        auto it = towr.upper_bound(cube);
        if(it == towr.end())
            towr.insert(cube);
        else
        {
            towr.erase(it);
            towr.insert(cube);
        }
    }
    cout << towr.size() << '\n';
    return 0;
}