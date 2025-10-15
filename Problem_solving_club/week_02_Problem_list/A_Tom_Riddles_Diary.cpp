#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<string> old;
    for(int i=0; i<n; i++)
    {
        string nam;
        cin >> nam;
        if(old.count(nam))
            cout << "YES" << '\n';
        else
        {
            cout << "NO" << "\n";
            old.insert(nam);
        }
        
    }
    return 0;
}