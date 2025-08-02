// using push_back()

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     cout << v.capacity() << endl;
//     v.push_back(10);
//     cout << v.capacity() << endl;
//     v.push_back(10);
//     cout << v.capacity() << endl;
//     v.push_back(10);
//     cout << v.capacity() << endl;
//     v.push_back(10);
//     cout << v.capacity() << endl;
//     return 0;
// }

// using clear()

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     cout << v.size() << endl;
//     v.clear();
//     cout << v.size() << endl;
//     cout << v[2] << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.resize(7,100);
    for(int i=0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}