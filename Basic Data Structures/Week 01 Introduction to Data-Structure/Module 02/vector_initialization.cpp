// // STL Standerd Template Libery
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // vector<int>v;  // type 1
//     // vector<int>v(5);  // type 2
//     // cout << v.size() << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v(10,-1); // type 3
//     for(int i=0; i<v.size();i++)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v(10,-1);
//     vector<int> v2(v); // type 4
//     for(int i=0; i<v2.size();i++)
//     {
//         cout << v2[i] << " ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {1,2,3,4,5};
    // vector<int>v(a,a+5); // type 5

    vector<int> v = {1,2,3,4}; // type 6
    for(int i=0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}