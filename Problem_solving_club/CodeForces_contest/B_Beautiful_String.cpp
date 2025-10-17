#include <bits/stdc++.h>
using namespace std;
bool palindrm(const string &s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(palindrm(s))
        {
            cout << 0 << "\n\n";
            continue;
        }
        set<int> remv0;
        for (int i = 0; i<n; i++)
            if (s[i] == '0')
                remv0.insert(i + 1);

        string x;
        for (int i = 0; i < n; i++)
            if (remv0.find(i + 1)== remv0.end())
                x += s[i];

        if (palindrm(x)) {
            cout << remv0.size() << "\n";
            for (auto idx : remv0)
                cout << idx << " ";
            cout << "\n";
            continue;
        }
        set<int> remv1;
        for(int i=0; i<n; i++)
            if (s[i] == '1')
                remv1.insert(i + 1);

        x.clear();
        for(int i = 0; i < n; i++)
            if(remv1.find(i + 1) ==remv1.end())
                x += s[i];

        if(palindrm(x))
        {
            cout << remv1.size() << "\n";
            for(auto idx :remv1)
                cout << idx << " ";
            cout << "\n";
            continue;
        }
        cout << -1 << "\n";
    }
    return 0;
}
