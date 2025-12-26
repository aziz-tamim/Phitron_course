// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         int n;
//         cin >>n;
//         if(n%2==0)
//             cout << -1<<"\n";
//         else
//         {
//             for(int i=1; i<=n; i++)
//                 cout << i << " ";
//             cout << "\n";
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        if (N == 2) {
            cout << -1 << '\n';
        }
        else if (N % 2 == 1) {
            for (int i = 1; i <= N; i++)
                cout << i << " ";
            cout << '\n';
        }
        else {
            // N even and >= 4
            cout << "1 4 2 3 ";
            for (int i = 5; i <= N; i++)
                cout << i << " ";
            cout << '\n';
        }
    }
    return 0;
}
