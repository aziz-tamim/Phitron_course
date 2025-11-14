// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
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
//         vector<ll> a(n);
//         map<ll, ll> freq;
//         for(int i=0; i<n; i++)
//         {
//             cin >> a[i];
//             freq[a[i]]++;
//         }
//         ll ans = 0;
//         for(auto &x : freq)
//         {
//             ll f = x.second;
//             // ans += f *(n-f);
//             ans += f * (f-1)/2;
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // Count frequency of wires going to each bottom segment
        vector<long long> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
            freq[a[i]]++;

        // Iterate from largest bottom segment to smallest
        long long ans = 0, sum = 0;
        for (int i = n; i >= 1; i--)
        {
            ans += freq[i] * sum; // all crossings with wires going to larger segments
            sum += freq[i];       // accumulate wires for future crossings
        }

        cout << ans << "\n";
    }

    return 0;
}
