// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     cout << (int)&a[2] << " " << (int)&a[3];
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1,2,3,4,5};
//     cout << (int)&v[2] << " " << (int)&v[3];
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout << (uintptr_t)&a[2] << " " << (uintptr_t)&a[3];
    return 0;
}