// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for(auto &w : words)
            cin >> w;
        vector<string> abbr(m);
        for(auto &a : abbr)
            cin >> a;
        bool avil[26] = {false};
        for(auto &w : words)
        {
            avil[w[0]-'a'] = true;
        }

        vector<bool> done(m, false);
        int doneCount = 0;
        bool changed = true;
        while(changed && doneCount < m)
        {
            changed = false;
            for(int i=0; i<m; i++)
            {
                if(done[i])
                    continue;
                bool ok = true;
                for(char c : abbr[i])
                {
                    if(!avil[c-'A'])
                    {
                        ok = false;
                        break;
                    }
                }
                if(ok)
                {
                    done[i] = true;
                    doneCount++;
                    avil[abbr[i][0]-'A'] = true;
                    changed = true;
                }
            }
        }
        cout << (doneCount == m ? "YES" : "NO") << nl;
    }
    return 0;
}