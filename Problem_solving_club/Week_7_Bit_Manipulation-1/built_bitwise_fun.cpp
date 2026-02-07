#include <bits/stdc++.h>
using namespace std;
bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}
void print_on_and_off_bits(int n)
{
    for(int k = 31; k >= 0; k--)
    {
        if(check_kth_bit_on_or_off(n, k))
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    print_on_and_off_bits(39);
    cout << "\n";
    // cout << __builtin_popcount(39) << '\n';
    cout << __lg(39) << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        char cur = '0'; // finger starts at 0

        for (int i = 0; i < n; i++) {
            if(s[i] != cur) ans++; // finger change
            cur = s[i];
        }

        // adjust according to number of transitions
        if(ans >= 3) cout << n + ans - 2 << "\n";
        else if(ans == 2) cout << n + ans - 1 << "\n";
        else cout << n + ans << "\n";
    }
    return 0;
}
