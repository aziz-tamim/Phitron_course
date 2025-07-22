#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    stack<int> st;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    queue<int> q;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if(n != m)
    {
        cout << "NO" << endl;
        return 0;
    }
    
    bool same = true;
    while(!st.empty() && !q.empty())
    {
        if(st.top() != q.front())
        {
            same = false;
            break;
        }
        st.pop();
        q.pop();
    }
    if(same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}