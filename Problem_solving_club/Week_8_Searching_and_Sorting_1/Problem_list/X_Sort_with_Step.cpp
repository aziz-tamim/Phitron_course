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
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        vector<int> key;
        for(int i=0; i<n; i++)
            key.push_back(a[i]);
        sort(key.begin(), key.end());
        int diff =0;
        for(int j=0; j<m; j++)
        {
            vector<int> val;
            for(int i=j; i<n; i+=m)
                val.push_back(a[i]);
            sort(val.begin(), val.end());

            bool ok = true;
            for(int i=0, k=0; i<n; i+= m, k++)
            {
                if(val[k] != key[i])
                {
                    ok = false;
                    break;
                }
            }
            if(ok == false)
                diff++;
        }
        if(diff == 0)
            cout << 0 << "\n";
        else if(diff == 1)
            cout << 1 << "\n";
        else
            cout << -1 << '\n';
    }
    return 0;
}

