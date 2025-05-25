#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    // if(a>b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }
    cout << min({3, 10, 20, 50}) << endl;
    cout << max({50, 10, 60, 20}) << endl;


    return 0;
}



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin >> a >> b;

//     // int temp = a;
//     // a = b;
//     // b = temp;
//     // cout << a << " " << b << endl;

//     swap(a,b);
//     cout << a << " " << b << endl;
//     return 0;
// }