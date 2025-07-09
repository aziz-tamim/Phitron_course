#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    cout << l.size() << endl;

    // list<int> l(10,3);
    // cout << *l.begin() << endl;

    // list<int> l(10,3);
    // for(auto it = l.begin(); it!=l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // list<int> l(10,5);
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }

    // list<int> l = {1,2,3,4,5};
    // list<int> l2 = l;
    // for(int val : l2)
    // {
    //     cout << val << endl;
    // }

    vector<int> v = {10,20,30};
    list<int> l2(v.begin(),v.end());
    for(int val : l2)
    {
        cout << val << endl;
    }
    return 0;
}