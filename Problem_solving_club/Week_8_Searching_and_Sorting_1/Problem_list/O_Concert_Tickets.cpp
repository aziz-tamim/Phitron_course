#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    multiset<int> mt;
    for(int i=0; i<n; i++)
    {
        int cst;
        cin >> cst;
        mt.insert(cst);
    }
    for(int i=0; i<m; i++)
    {
        int toppri;
        cin >> toppri;
        auto it = mt.upper_bound(toppri);
        if(it == mt.begin())
            cout << -1 << '\n';
        else
        {
            it--;
            cout << *it << '\n';
            mt.erase(it);
        }
    }
    return 0;
}


hello wperp
recently apnara black friday deels shompuro korecen. 