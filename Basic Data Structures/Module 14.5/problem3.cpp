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