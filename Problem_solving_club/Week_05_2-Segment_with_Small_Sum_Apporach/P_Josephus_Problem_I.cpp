#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    queue<int> q;
    for(int i=1; i<=n; i++)
        q.push(i);
    vector<int> odr;
    while(!q.empty())
    {
        q.push(q.front());
        q.pop();
        odr.push_back(q.front());
        q.pop();
    }
    for(int x : odr)
        cout << x << " ";
    cout << "\n";
    return 0;
}