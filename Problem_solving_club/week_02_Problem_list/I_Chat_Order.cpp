#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    list<string> net;
    unordered_map<string, list<string>::iterator> old;
    for(int i=0; i<q; i++)
    {
        string name;
        cin >> name;
        if(old.count(name))
        {
            net.erase(old[name]);
        }

        net.push_front(name);
        old[name] = net.begin();
    }
    for(auto &x : net)
        cout << x << "\n";
    return 0;
}