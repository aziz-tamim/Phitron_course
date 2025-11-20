#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll N, K;
        string S;
        cin >> N >> K >> S;

        vector<pair<ll, char>> known;
        for (ll i = 0; i < N; ++i)
        {
            if (S[i] != 'I')
                known.push_back({i, S[i]});
        }

        if (known.empty())
        {
            ll ans = N * K - 1;
            cout << ans << '\n';
            continue;
        }

        ll inside_trans = 0;
        for (size_t j = 0; j + 1 < known.size(); ++j)
        {
            if (known[j].second != known[j + 1].second)
                inside_trans++;
        }

        char first_known = known.front().second;
        char last_known = known.back().second;
        ll boundary_trans = (first_known != last_known) ? 1 : 0;

        ll total_trans = inside_trans * K + boundary_trans * max(0LL, K - 1);
        
        ll total_adj = N * K - 1;
        ll ans = total_adj - total_trans;
        cout << ans << '\n';
    }
    return 0;
}
