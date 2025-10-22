#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int x;
        cin >> x;
        set<int> st;
        for(int i=0; i<x; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }
        cout << st.size() << "\n";
    }
    return 0;
}