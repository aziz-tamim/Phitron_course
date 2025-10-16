#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    vector<long long> vc;
    for(int i =0; i<n; i++)
    {
        vc.push_back(arr[i]);
        reverse(vc.begin(),vc.end());
    }
    for(auto x : vc)
        cout << x << " ";
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<long long> a(n);
//     for(int i = 0; i < n; i++) cin >> a[i];

//     deque<long long> dq;

//     // alternating front/back push, starting front
//     for(int i = 0; i < n; i++) {
//         if(i % 2 == 0)
//             dq.push_front(a[i]);
//         else
//             dq.push_back(a[i]);
//     }

//     for(auto x : dq) cout << x << " ";
//     cout << "\n";

//     return 0;
// }
