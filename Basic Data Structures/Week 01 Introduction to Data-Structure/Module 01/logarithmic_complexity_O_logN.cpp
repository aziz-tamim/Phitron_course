// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i*=2) // complexity O(n)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=n; i>=1; i/=3) // complexity O(n)
    {
        cout << i << endl;
    }
    return 0;
}