// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int i=0; i<n; i++)
//     {
//         for(int l =0; l <n; l++)
//         {
//             if(i== n/2 && l==n/ 2)
//             {
//                 cout << "X";
//             }
//             else if(i< n/2 && l == i)
//             {
//                 cout << "\\";
//             }
//             else if(i< n/2 && l == n-i-1)
//             {
//                 cout <<  "/";
//             }
//             else if(i>n/2 && l== n-i-1)
//             {
//                 cout << "/";
//             }
//             else if(i> n/2 && l == i)
//             {
//                 cout << "\\";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//             cout << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = n/2;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==mid && j == mid)
            {
                cout << "X";
            }
            else if( i==j)
            {
                cout << "\\";
            }
            else if(i+j == n-1)
            {
                cout << "/";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}