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