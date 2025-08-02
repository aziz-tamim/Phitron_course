// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "Hello";
//     // for(int i=0; i<s.size(); i++)
//     // {
//     //     cout << s[i] << endl;
//     // }
//     cout << *s.begin() << endl;
//     cout << *(s.end()-1) << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    // for(string :: iterator it = s.begin();it<s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    for(auto it = s.begin();it<s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}