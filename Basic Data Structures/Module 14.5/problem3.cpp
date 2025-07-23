// Docs link --> https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit?tab=t.0

// Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> st;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    stack<int> temp;
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    while(!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}