#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num, tc;
    cin >> num >> tc;
    vector<priority_queue<int>> pq(num);
    for(int i=0; i<tc; i++)
    {
        int outpt, tesc;
        cin >> outpt >> tesc;
        if(outpt == 0)
        {
            int x;
            cin >> x;
            pq[tesc].push(x);
        }
        else if(outpt == 1)
        {
            if(pq[tesc].empty() == false)
                cout << pq[tesc].top() << '\n';
        }
        else if(outpt == 2)
        {
            if(pq[tesc].empty() == false)
                pq[tesc].pop();
        }
    }
    return 0;
}
