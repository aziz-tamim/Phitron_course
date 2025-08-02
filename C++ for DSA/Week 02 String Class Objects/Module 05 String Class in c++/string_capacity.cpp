// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "Hello World";
//     cout << s.size() << endl;  // returns the size of the string.
//     cout << s.max_size() << endl; // returns the maximum size that string can hold
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "Hello World";
//     cout << s.capacity() << endl;  // returns current available capacity of the string.
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "Hello World";
//     s.clear();
//     cout << s << endl;   // clear the string
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "Hello World";
//     s.clear();
//     if(s.empty()==true)  // return true/false if the string is empty.
//     {
//         cout << "Empty" << endl;
//     }
//     else
//     {
//         cout << "Not empty" << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    s.resize(15,'x');
    cout << s << endl;
    return 0;
}