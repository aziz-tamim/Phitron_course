#include <bits/stdc++.h>
using namespace std;

long long maxScore(string s, long long k)
{
    long long n = s.size();
    // Replace all 'I's with the previous char if possible
    for (long long i = 0; i < n; ++i)
    {
        if (s[i] == 'I')
        {
            if (i > 0)
                s[i] = s[i - 1];
            else
                s[i] = 'A';
        }
    }

    // Count consecutive equal pairs in one S
    long long cnt = 0;
    long long i = 0;
    while (i < n)
    {
        long long j = i;
        while (j < n && s[j] == s[i])
            j++;
        cnt += (j - i - 1);
        i = j;
    }

    long long res = cnt * k; // Internal pairs for k repetitions

    // Extra pairs at boundaries between S copies
    if (s[0] == s[n - 1])
    {
        res += (k - 1);
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << maxScore(s, k) << "\n";
    }
    return 0;
}
