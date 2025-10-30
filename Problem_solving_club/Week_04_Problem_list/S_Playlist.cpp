#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> sng(n);
    for(int i=0; i<n; i++)
        cin >> sng[i];
    set<int> s;
    int mxlng = 0;
    int l = 0;
    for(int r = 0; r<n; r++)
    {
        while(s.count(sng[r]))
        {
            s.erase(sng[l]);
            l++;
        }
        s.insert(sng[r]);
        mxlng = max(mxlng, r-l+1);
    }
    cout << mxlng << '\n';
    return 0;
}
