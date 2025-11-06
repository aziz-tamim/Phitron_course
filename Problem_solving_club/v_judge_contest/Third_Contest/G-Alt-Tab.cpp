#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> program;
    unordered_set<string> st;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        if(st.count(s))
            program.erase(find(program.begin(), program.end(),s));
        else
            st.insert(s);
        program.insert(program.begin(),s);
    }
    for(string &p : program)
    {
        int len = p.size();
        cout << p[len-2] << p[len-1];
    }
    cout << "\n";
    return 0;
}

