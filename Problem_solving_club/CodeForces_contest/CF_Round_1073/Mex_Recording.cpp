// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), suf(n), pre(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    set<int> st;
    for(int i=0; i<=n; i++)
        st.insert(i);
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        if(st.find(v[i])!= st.end())
        {
            st.erase(v[i]);
        }
        int mex = *st.begin();
        pre[i] = mex;
    }
    st.clear();
    for(int i=0; i<=n; i++)
        st.insert(i);
    for(int i=n-1; i>=0; i--)
    {
        if(st.find(v[i])!= st.end())
            st.erase(v[i]);
        int mex = *st.begin();
        suf[i] = mex;
    }
    for(int i=0; i<n-1; i++)
    {
        if(pre[i] == suf[i+1])
        {
            cout << "NO" << "\n";
            return;
        }
    }
    cout<<"YES" << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}