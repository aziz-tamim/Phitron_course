// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     set<int> s;
//     for(int i=0; i<n; i++)
//     {
//         int x;
//         cin >> x;
//         s.insert(x);
//     }

//     for(auto x : s)
//         cout << x << " ";
//     cout << "\n";

//     // auto it = s.find(25);
//     // if(it != s.end())
//     // {
//     //     cout << "Found" << "\n";
//     // }
//     // else
//     //     cout << "Not Found" << '\n';

//     s.erase(6);
//     for(auto x : s)
//         cout << x << " ";
//     cout << "\n";

//     cout << s.count(4) << "\n";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for(auto x : s)
        cout << x << " ";
    cout << "\n";

    // int N;
    // cin >> N;
    // auto it = s.lower_bound(N);
    // // cout << *it << "\n";

    // if(it == s.end())
    //     cout << "End" << "\n";
    // else
    //     cout << *it << "\n";


    int N;
    cin >> N;
    auto it = s.upper_bound(N);

    if(it == s.end())
        cout << "End" << "\n";
    else
        cout << *it << "\n";
    return 0;
}