#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6};

    cout << v[3] << endl;
    // cout << v[v.size()-1] << endl;
    cout << v.back() << endl;

    cout << v[0] << endl;
    // cout << v.front() << endl;
    return 0;
}


// vector iterator
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6};
    for(auto it = v.begin(); it<v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}