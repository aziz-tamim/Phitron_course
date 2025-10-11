// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while(T--) {
//         int N;
//         cin >> N;
//         vector<long long> A(N);
//         for(int i = 0; i < N; i++) cin >> A[i];

//         long long ops = 0;

//         if(N == 2) {
//             // Special case: only two elements
//             ops = min(abs(A[0]-A[1]), min(A[0], A[1]));
//         } else {
//             // First element
//             ops += min(abs(A[0]-A[1]), A[0]);

//             // Middle elements
//             for(int i = 1; i < N-1; i++) {
//                 long long op_sum = abs(A[i] - (A[i-1]+A[i+1]));
//                 long long op_zero = A[i];
//                 ops += min(op_sum, op_zero);
//             }

//             // Last element
//             ops += min(abs(A[N-1]-A[N-2]), A[N-1]);
//         }

//         cout << ops << "\n";
//     }

//     return 0;
// }

