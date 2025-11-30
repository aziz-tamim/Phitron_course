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
        string n,m;
        cin >> n>>m;
        int i=0,j=0;
        while(i<n.size() && j<m.size())
        {
            if(n[i] == m[j])
                i++;
            j++;
        }
        bool ok = (i==n.size());
        if(ok == false)
        {
            i=0, j=0;
            while(i<m.size() && j<n.size())
            {
                if(m[i] == n[j])
                    i++;
                j++;
            }
            ok = (i==m.size());
        }
        if(ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << "\n";
    }
    return 0;
}