// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<bool> prime(n+1, true);
//     prime[0] = prime[1] = false;
//     for(int i=2; i*i <= n; i++)
//     {
//         if(prime[i])
//         {
//             for(int j=i*i; j<=n; j+=i)
//                 prime[j] = false;
//         }
//     }
//     for(int i=2; i<=n; i++)
//     {
//         if(prime[i])
//             cout << i << " ";
//     }
//     cout << "\n";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n % 2 == 0)
    {
        cout << n/2 << "\n";
        for(int i = 0; i < n/2; i++)
            cout << 2 << " ";
    }
    else
    {
        cout << (n - 3)/2 + 1 << "\n";
        cout << 3 << " ";
        for(int i = 0; i < (n - 3)/2; i++)
            cout << 2 << " ";
    }
    return 0;
}
