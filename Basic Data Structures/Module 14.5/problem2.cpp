// Docs Link --> https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit?tab=t.0

// Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

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