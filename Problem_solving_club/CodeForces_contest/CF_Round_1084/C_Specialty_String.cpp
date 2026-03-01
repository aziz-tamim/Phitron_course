// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for(int i=0; i<n; i++)
        {
            if(st.empty())
                st.push(s[i]);
            else
            {
                if(st.top() == s[i])
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        if(st.empty())
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}