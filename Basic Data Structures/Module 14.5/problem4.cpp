// Docs Link --> https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit?tab=t.0

// Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    queue<int> q;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    stack<int> st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    queue<int> reversequ;

    while(!st.empty())
    {
        reversequ.push(st.top());
        st.pop();
    }
    while(!reversequ.empty())
    {
        cout << reversequ.front() << " ";
        reversequ.pop();
    }
    cout << "\n";
    
    return 0;
}