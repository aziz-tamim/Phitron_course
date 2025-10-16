#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;

    if (K == 0) {
        for (int i = 1; i <= N; i++) cout << i << " ";
        cout << "\n";
        return;
    }
    if (K >= N) {
        cout << -1 << "\n";
        return;
    }

    if (N == 1) {
        if (K == 0) cout << 1 << "\n";
        else cout << -1 << "\n";
        return;
    }

    vector<int> A(N);
    iota(A.begin(), A.end(), 1); // Fill 1..N

    if (K == N-1) {
        // Special construction for K = N-1
        if (N == 2) {
            cout << -1 << "\n";
            return;
        }
        A[0] = N-1;
        A[1] = N;
        A[N-1] = 1;
        for (int i = 2; i < N-1; i++) A[i] = i;
    } else {
        swap(A[0], A[K]);
    }

    for (int x : A) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}
