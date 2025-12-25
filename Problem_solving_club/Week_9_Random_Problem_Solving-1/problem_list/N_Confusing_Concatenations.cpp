#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        vector<int> a,b;
        a.push_back(v[0]);
        int i=1;
        while(i<n && v[i]<v[0])
        {
            a.push_back(v[i]);
            i++;
        }
        while(i<n)
        {
            b.push_back(v[i]);
            i++;
        }
        if(b.size() == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        cout << a.size() << "\n";
        for(int x : a)
            cout << x << " ";
        cout << "\n";
        cout << b.size() << "\n";
        for(int x: b)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}