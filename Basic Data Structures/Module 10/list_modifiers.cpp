#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l = {10,20,30};
    // list<int> l2;
    // l2 = l;
    // // l2.assign(l.begin(),l.end());
    // for(int val : l2)
    // {
    //     cout << val << endl;
    // }

    // list<int> l = {10,20,30};
    // l.push_back(40);
    // l.push_front(100);
    // l.pop_back();
    // l.pop_front();
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }

    // list<int> l = {10,20,30};
    // cout << *next(l.begin(),1);

    // list<int> l = {10,20,30};
    // l.insert(next(l.begin(),2),100);
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }

    // list<int> l = {10,20,30};
    // list<int> l2 = {100,200};
    // vector<int> v = {2,3,4};
    // l.insert(next(l.begin(),2),v.begin(),v.end());
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }

    // list<int> l = {10,20,30,40,50,60};
    // l.erase(next(l.begin(),2),next(l.begin(),5));
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }

    // list<int> l = {10,20,30,40,20,20};
    // replace(l.begin(),l.end(),20,100);
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }

    list<int> l = {10,20,30,40,20,20};
    auto it = find(l.begin(), l.end(),20);
    if(it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}