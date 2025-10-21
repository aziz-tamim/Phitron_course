#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int nm, nq;
    cin >> nm >> nq;
    multiset<long long> st;
    for(int i=0; i<nm; i++)
    {
        long long x;
        cin >> x;
        st.insert(x);
    }
    for(int i=0; i<nq; i++)
    {
        int type;
        cin >> type;
        if(type == 0)
        {
            long long x;
            cin >> x;
            st.insert(x);
        }
        else if(type == 1)
        {
            auto it = st.begin();
            cout << *it << "\n";
            st.erase(it);
        }
        else if(type == 2)
        {
            auto it = prev(st.end());
            cout << *it << '\n';
            st.erase(it);
        }
    }
    return 0;
}