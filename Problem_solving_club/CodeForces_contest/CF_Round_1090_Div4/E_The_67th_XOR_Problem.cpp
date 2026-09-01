// AUTHOR :- ABDUL AZIZ TAMIM

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

struct Node {
    int child[2];

    Node() {
        child[0] = child[1] = -1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<ll> a(n);

        for (auto &x : a)
            cin >> x;

        vector<Node> trie(1);

        auto insert = [&](ll x) {
            int node = 0;

            for (int bit = 30; bit >= 0; bit--)
            {
                int b = (x >> bit) & 1;

                if (trie[node].child[b] == -1) {
                    trie[node].child[b] = trie.size();
                    trie.emplace_back();
                }

                node = trie[node].child[b];
            }
        };

        auto getMaxXor = [&](ll x) {
            int node = 0;
            ll res = 0;

            for (int bit = 30; bit >= 0; bit--) {
                int b = (x >> bit) & 1;

                // Prefer opposite bit
                int want = b ^ 1;

                if (trie[node].child[want] != -1) {
                    res |= (1LL << bit);
                    node = trie[node].child[want];
                } else {
                    node = trie[node].child[b];
                }
            }

            return res;
        };

        // Insert first element
        insert(a[0]);

        ll ans = 0;

        for (int i = 1; i < n; i++) {
            ans = max(ans, getMaxXor(a[i]));
            insert(a[i]);
        }

        cout << ans << nl;
    }

    return 0;
}