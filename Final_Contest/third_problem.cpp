#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testc;
    cin >> testc;
    for(int i= 0; i<testc; i++)
    {
        int n;
        string str;
        cin >> n >> str;

        stack<char> st;
        for(int j=0; j<n;j++)
        {
            if(!st.empty())
            {
                if(st.top() == str[j])
                    st.pop();
                else
                    st.push(str[j]);
            }
            else

                st.push(str[j]);
        }
        
        cout <<st.size() <<"\n";
    }
    return 0;
}