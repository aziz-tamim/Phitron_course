#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >>n >> m;
        deque<int> dq;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        while(m--)
        {
            int mn = dq.front();
            int mx = dq.back();
            dq.pop_front();
            dq.pop_back();
            dq.push_back(mn +mx);
        }
        for(int x : dq)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
