// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1,2,3,4,5};
//     vector<int> v2;
//     v2 = v;
//     // for(int i=0;i<v2.size(); i++)
//     // {
//     //     cout << v2[i] << " ";
//     // }
//     for(int x : v2)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1,2,3,4,5};
//     v.pop_back();
//     v.pop_back();
//     for(int x : v)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1,2,3,4};
//     vector <int> v2 = {100,200, 300};
//     v.insert(v.begin()+2, v2.begin(),v2.end());

//     for(int x : v)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1,2,3,4,5,6};
//     vector <int> v2 = {100,200, 300};

//     // v.erase(v.begin()+1);

//     v.erase(v.begin()+1,v.begin()+5);

//     for(int x : v)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1,2,3,2,5,2};
    
    // replace(v.begin(),v.end(),2,100);

//     replace(v.begin(),v.end()-1,2,100);

//     for(int x : v)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,2,5,2};
    auto it = find(v.begin(),v.end(),5);
    if(it==v.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    cout << endl;
    cout << *it << endl;
    return 0;
}