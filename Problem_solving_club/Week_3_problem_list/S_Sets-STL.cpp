#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    set<int> st;
    while(tc--)
    {
        int type, a;
        cin >> type >> a;
        if(type == 1)
            st.insert(a);
        else if(type == 2)
            st.erase(a);
        else if(type == 3)
        {
            if(st.find(a) != st.end())
                cout << "Yes" << "\n";
            else
                cout << "No" << '\n';
        }
    }
    return 0;
}