// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x = 10;
//     int *p = new int;
//     *p = 100;
//     cout << *p << endl;
//     return 0;
// }

// static variable example
// #include<bits/stdc++.h>
// using namespace std;
// int *p;
// void fun()
// {
//     int x = 10;
//     p = &x;
//     cout << "Fun ->" << *p << endl;
//     return;
// }
// int main()
// {
//     fun();
//     cout << "Main ->" << *p << endl;
//     return 0;
// }


// dynamic variable example
#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int* x = new int;
    *x = 10;
    p = x;
    cout << "Fun ->" << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "Main ->" << *p << endl;
    return 0;
}
