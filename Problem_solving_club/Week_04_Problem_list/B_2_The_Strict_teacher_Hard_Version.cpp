// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n,m,q;
//     cin >> n >> m >> q;
//     vector<int> b(m);
//     for(auto &u:b)
//         cin >> u;
//     sort(b.begin(),b.end());
//     while(q--)
//     {
//         int a;
//         cin >> a;
//         auto it = upper_bound(b.begin(),b.end(),a);
//         if(it==b.end())
//         {
//             it--;
//             cout << n-*it << "\n";
//         }
//         else if(it == b.begin())
//         {
//             cout << *it -1 << "\n";
//         }
//         else
//         {
//             int porer_teacher = *it;
//             it--;
//             int ager_teacher = *it;
//             int len = porer_teacher - ager_teacher - 2;
//             cout << (len+1)/2 << "\n";
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> b(m);
    for (auto &u : b)
        cin >> u;
    sort(b.begin(), b.end());
    while (q--)
    {
        int a;
        cin >> a;
        auto it = upper_bound(b.begin(), b.end(), a);
        if (it == b.end())
        {
            cout << n - b.back() << "\n";
        }
        else if (it == b.begin())
        {
            cout << b.front() - 1 << "\n";
        }
        else
        {
            int right = *it;
            int left = *(it - 1);
            cout << (right - left) / 2 << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
