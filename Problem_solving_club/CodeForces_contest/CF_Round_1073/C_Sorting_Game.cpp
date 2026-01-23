// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    sort(t.begin(), t.end());
    if(s==t)
    {
        cout << "Bob" << "\n";
        return;
    }
    vector<int> idx;
    for(int i=0; i<n; i++)
    {
        if(s[i]!=t[i])
        {
            idx.push_back(i);
        }
    }
    for(int i=1; i<idx.size(); i++)
    {
        if(s[idx[i]] > s[idx[i - 1]])
        {
            cout << "Bob" << '\n';
            return;
        }
    }
    cout << "Alice" << "\n";
    cout << idx.size() << '\n';
    for(int x : idx)
        cout << x + 1 << " ";
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}