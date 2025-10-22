#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
            
        priority_queue<long long> pq;
        long long all = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] == 0)
            {
                if(pq.empty() == false)
                {
                    all += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(arr[i]);
        }
        cout << all << "\n";
    }
    return 0;
}