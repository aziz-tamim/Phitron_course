#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int>v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> pre(n+1);
    pre[1] = v[1];
    for(int i=2; i<=n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        long long int sum;
        if(l==1)
        {
           sum = pre[r];
        }
        else
        {
            sum = pre[r]-pre[l-1];
        }
        cout << sum << endl;
    }
    return 0;
}


// ata phitron book theke collect kora.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N, Q;
//     cin >> N >> Q;
//     vector<int> V(N);
//     for (int i = 0; i < N; i++) // O(N)
//     {
//         cin >> V[i];
//     }
//     for (int i = 1; i <= Q; i++) // O(Q)
//     {
//         int L, R;
//         cin >> L >> R;
//         L--;
//         R--; // converting the position to array index
//         int SUM = 0;
//         for (int j = L; j <= R; j++) // O(N) -> কারণ আমাদের প্রত্যেকবার L এর মান ১ এবং R এর মান N পর্যন্ত দেয়া হতে পারে
//         {
//             SUM += V[j];
//         }
//         cout << SUM << endl;
//     }
// }
