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
//         cin >> n;
//         int zer = 0;
//         for(int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             if (x == 0)
//                 zer++;
//         }

//         if(zer == 0 || zer % 2 == 1)
//             cout << "Alice" << "\n";
//         else
//             cout << "Bob" << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        bool gero = false;
        for(int i=0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 0)
                gero = true;
        }

        if (!gero)
            cout << "Alice" << "\n";
        else if(a[0] == 0 && a[n-1] == 0)
            cout << "Bob" << "\n";
        else
            cout << "Alice" << "\n";
    }
    return 0;
}
