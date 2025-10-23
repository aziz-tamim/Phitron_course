#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        long long C;
        cin >> N >> C;
        vector<long long> B(N), D(N);
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> D[i];
        }
        
        long long min_total = LLONG_MAX;
        
        // Use monotonic queue for sliding window minimum
        vector<long long> B_double(2 * N);
        for (int i = 0; i < N; i++) {
            B_double[i] = B[i];
            B_double[i + N] = B[i];
        }
        
        // For each window size
        for (int x = 0; x < N; x++) {
            int w = x + 1;
            long long cost = x * C;
            
            deque<int> dq;
            vector<long long> window_min(N);
            
            // First window
            for (int i = 0; i < w; i++) {
                while (!dq.empty() && B_double[dq.back()] >= B_double[i]) 
                    dq.pop_back();
                dq.push_back(i);
            }
            window_min[0] = B_double[dq.front()];
            
            // Remaining windows
            for (int i = 1; i < N; i++) {
                if (dq.front() < i) dq.pop_front();
                int next = i + w - 1;
                while (!dq.empty() && B_double[dq.back()] >= B_double[next]) 
                    dq.pop_back();
                dq.push_back(next);
                window_min[i] = B_double[dq.front()];
            }
            
            // Calculate total cost
            for (int i = 0; i < N; i++) {
                cost += D[i] * window_min[(i - x + N) % N];
            }
            
            min_total = min(min_total, cost);
        }
        
        cout << min_total << endl;
    }
    
    return 0;
}

 