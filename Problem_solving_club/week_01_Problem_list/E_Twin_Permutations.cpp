// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> purm1(n);
//         for(int i=0; i<n; i++)
//             cin >> purm1[i];

//         vector<int> purm2(n);
//         for(int i=0; i<n; i++)
//             // cin >> purm2[i];
//             purm2[i] = i+1;

//         for(int i=0; i<n; i++)
//         {
//             cout << purm2[i] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            int purm = n + 1 - val;
            cout << purm << " ";
        }
        cout << "\n";
    }

    return 0;
}