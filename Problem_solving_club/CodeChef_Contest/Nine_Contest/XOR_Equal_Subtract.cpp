#include <bits/stdc++.h>
using namespace std;

bool good(const vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((v[i] & v[j]) != 0)
                return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        int best = 1;

        for(int mask = 1; mask < (1 << N); mask++)
        {
            vector<int> v;
            for (int i = 0; i < N; i++)
            {
                if (mask & (1 << i))
                    v.push_back(A[i]);
            }
            if ((int)v.size() <= best)
                continue;
            if (good(v))
                best = v.size();
        }

        cout << best << '\n';
    }

    return 0;
}
