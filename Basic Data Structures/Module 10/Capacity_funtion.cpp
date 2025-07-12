#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {10,20,30};
    // list<int> l2(v.begin(), v.end());
    // l2.clear();
    // cout << l2.size() << endl;
    // for(int val : l2)
    // {
    //     cout << val << endl;
    // }

    // vector<int> v = {10,20,30};
    // list<int> l2(v.begin(), v.end());
    // l2.clear();
    // cout << l2.size() << endl;
    // if(l2.empty())
    // {
    //     cout << "Empty";
    // }
    // for(int val : l2)
    // {
    //     cout << val << endl;
    // }


    vector<int> v = {10,20,30};
    list<int> l2(v.begin(),v.end());
    l2.resize(5,100);
    for(int val : l2)
    {
        cout << val << endl;
    }
    return 0;
}