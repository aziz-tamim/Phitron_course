#include <bits/stdc++.h>
using namespace std;

long long maxScore(const string &S, long long K) {
    long long n = S.size();
    vector<char> T(S.begin(), S.end());

    // Replace 'I' optimally
    for (long long i = 0; i < n; i++) {
        if (T[i] == 'I') {
            if (i > 0) T[i] = T[i-1];
            else if (i < n-1 && T[i+1] != 'I') T[i] = T[i+1];
            else T[i] = 'A';
        }
    }

    // Count score for single S
    long long singleScore = 0;
    for (long long i = 0; i < n-1; i++) {
        if (T[i] == T[i+1]) singleScore++;
    }

    // Check junctions between repetitions
    long long extra = (T[0] == T[n-1]) ? (K-1) : 0;

    return singleScore * K + extra;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long N, K;
        string S;
        cin >> N >> K >> S;
        cout << maxScore(S, K) << "\n";
    }
    return 0;
}
