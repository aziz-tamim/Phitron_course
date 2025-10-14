#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    map<string,string> now_orginal;
    while(q--)
    {
        string old, new_n;
        cin >> old >> new_n;
        string orginal_n;

        if(now_orginal.count(old))
        {
            orginal_n = now_orginal[old];
            now_orginal.erase(old);
        }
        else
        {
            orginal_n = old;
        }

        now_orginal[new_n] = orginal_n;
    }
    cout << now_orginal.size() << '\n';
    for(auto &x : now_orginal)
    {
        cout << x.second << " " << x.first << '\n';
    }
    return 0;
}