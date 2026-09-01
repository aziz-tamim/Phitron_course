#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> ns(t);
    int mx = 0;

    for (int &n : ns) {
        cin >> n;
        mx = max(mx, n);
    }

    vector<bool> isPrime(200000, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < 200000; i++)
    {
        if (isPrime[i]) {
            for (int j = i * i; j < 200000; j += i)
                isPrime[j] = false;
        }
    }
    vector<long long> p;
    for (int i = 2; i < 200000 && (int)p.size() <= mx; i++)
    {
        if (isPrime[i])
            p.push_back(i);
    }

    for (int n : ns) {
        for (int i = 0; i < n; i++) {
            cout << p[i] * p[i + 1] << " ";
        }
        cout << '\n';
    }
    return 0;
}