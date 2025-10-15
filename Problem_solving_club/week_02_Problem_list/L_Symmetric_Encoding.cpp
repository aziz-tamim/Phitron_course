#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string txt;
        cin >> txt;

        set<char> st(txt.begin(), txt.end());
        string str(st.begin(), st.end());
        map<char, char> mp;
        int ln = str.size();
        for(int i=0; i<ln; ++i)
            mp[str[i]] = str[ln - 1-i];

        string now;
        for(char x : txt)
            now += mp[x];

        cout << now << "\n";
    }
    
    return 0;
}