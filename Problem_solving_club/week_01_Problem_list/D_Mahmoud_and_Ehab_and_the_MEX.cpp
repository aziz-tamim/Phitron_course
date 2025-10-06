#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    set<int> st;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }
    int mx = 0;
    for(int i=0; i<x; i++)
    {
        if(st.find(i) == st.end())
            mx++;
    }
    if(st.find(x) != st.end())
        mx++;
        
    cout << mx << "\n";
    return 0;
}