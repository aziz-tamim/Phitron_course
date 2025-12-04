#include <bits/stdc++.h>
using namespace std;

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
        vector<long long> A(N), B(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        // Kadane for A: max subarray ending at each index
        vector<long long> max_end_A(N);
        long long curr = A[0];
        max_end_A[0] = curr;
        for (int i = 1; i < N; i++)
        {
            curr = max(A[i], curr + A[i]);
            max_end_A[i] = curr;
        }

        // Kadane for B: max subarray starting at each index
        vector<long long> max_start_B(N);
        curr = B[N - 1];
        max_start_B[N - 1] = curr;
        for (int i = N - 2; i >= 0; i--)
        {
            curr = max(B[i], curr + B[i]);
            max_start_B[i] = curr;
        }

        // Combine for all possible intersection points
        long long answer = LLONG_MIN;
        long long maxA = max_end_A[0];
        answer = max(answer, maxA + max_start_B[0]);

        for (int i = 1; i < N; i++)
        {
            maxA = max(maxA, max_end_A[i]);
            answer = max(answer, maxA + max_start_B[i]);
        }

        cout << answer << "\n";
    }
}
