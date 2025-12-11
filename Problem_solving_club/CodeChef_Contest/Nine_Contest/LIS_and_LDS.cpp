#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        for (int i= 0; i<n; i++)
        {
            int x;
            cin >> x;
            ans += x;
        }

        ll diff = n;
        ll fnl = ans - diff;
        ll answ = min(diff, 1+fnl);
        cout << answ << "\n";
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> F(N);
        for (int i = 0; i < N; i++) cin >> F[i];
        long long left = 1, right = N, best = 1;
        while (left <= right) {
            long long mid = (left + right) / 2;
            long long need = mid * mid;

            long long have = 0;
            for (int i = 0; i < N; i++) {
                have += min(F[i], mid);
                if (have >= need) break;
            }

            if (have >= need) {
                best = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        cout << best << "\n";
    }
    return 0;
}
