#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int j=0 ;j<n; j++)
            cin >> arr[j];
            
        deque<int> dq;
        for(int k=0; k<n; k++)
        {
            if(dq.empty() || arr[k] <= dq.front())
                dq.push_front(arr[k]);
            else
                dq.push_back(arr[k]);
        }
        for(auto x : dq)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}