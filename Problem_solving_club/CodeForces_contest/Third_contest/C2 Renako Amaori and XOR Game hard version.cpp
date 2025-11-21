#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin >> t;
while (t--)
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int xor_all = 0;
    for (int i = 0; i < n; i++) xor_all ^= a[i] ^ b[i];

    if (xor_all == 0) {
        cout << "Tie\n";
        continue;
    }

    // Find most significant differing bit
    int msb = 31 - __builtin_clz(xor_all);

    int cnt_diff_odd = 0, cnt_diff_even = 0;
    for (int i = 0; i < n; i++) {
        if (((a[i] ^ b[i]) >> msb) & 1) {
            if ((i % 2) == 0) cnt_diff_odd++;  // Ajisai moves on odd indices (0-based even)
            else cnt_diff_even++;               // Mai moves on even indices (0-based odd)
        }
    }

    // Determine winner based on parity of counts
    if (cnt_diff_odd % 2 == 1) cout << "Ajisai\n";
    else if (cnt_diff_even % 2 == 1) cout << "Mai\n";
    else cout << "Tie\n";
}

return 0;

}
