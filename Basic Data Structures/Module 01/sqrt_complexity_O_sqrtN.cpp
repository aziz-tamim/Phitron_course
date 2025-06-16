// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for(int i=1; i<= sqrt(n); i++) // O(sqrt(n))
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

    for(int i=1; i<=sqrt(n); i++) // O(sqrt(n))
    {  // int i=1; i*i<=n; i++   // sqrt root n ai vabe o lekha jai
        if(n%i==0)
        {
            cout << i << " " << n/i << " ";
        }
    }
    return 0;
}