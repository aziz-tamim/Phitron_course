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



// AUTHOR :- ABDUL AZIZ TAMIM
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt[10] = {0};

        // bitmask-style: check each bit
        for (int i = 0; i < n; i++) {
            for (int b = 0; b < 10; b++) {
                if ((a[i] >> b) & 1)
                    cnt[b]++;
            }
        }

        int max_val = 0;

        for (int b = 0; b < 10; b++) {
            if (cnt[b] > 0) {
                max_val |= (1 << b);  // set bit
            }
        }

        cout << max_val << "\n";
    }
    return 0;
}
