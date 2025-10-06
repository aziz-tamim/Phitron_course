#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    set<char> st(s.begin(), s.end());
    for(char i='a'; i<='z'; i++)
    {
        if(st.find(i) ==st.end())
        {
            cout << i << "\n";
            return 0;
        }
    }
    cout << "None\n";
    return 0;
}