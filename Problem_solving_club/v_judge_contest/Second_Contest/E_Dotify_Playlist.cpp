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
        int a,b,c;
        cin >> a >> c >> b;
        vector<int> sng;
        for(int i=0; i<a; i++)
        {
            int m,li;
            cin >> m >> li;
            if(li == b)
                sng.push_back(m);
        }
        if(sng.size() < c)
            cout << -1 << '\n';
        else
        {
            sort(sng.begin(), sng.end(),greater<int>());
            int cnt =0;
            for(int i=0; i<c; i++)
            {
                cnt += sng[i];
            }
            cout << cnt << "\n";
        }
    }
    return 0;
}