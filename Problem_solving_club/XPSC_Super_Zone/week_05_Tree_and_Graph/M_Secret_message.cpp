// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        int n,m;
        cin >> n >> m;
        vector<string> arr(m);
        for(int i=0; i<m; i++)
            cin >> arr[i];
        vector<set<char>> str(n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                str[i].insert(arr[j][i]);
            }
        }
        string ans;
        for(int j=1; j<=n; j++)
        {
            if(n%j != 0)
                continue;
            bool ok = true;
            vector<char> scnd(j);
            for(int k=0; k<j; k++)
            {
                scnd[k] = 0;
                for(char c = 'a'; c <='z'; c++)
                {
                    bool is_true = true;
                    for(int i=k; i<n; i+=j)
                    {
                        if(str[i].count(c) == false)
                        {
                            is_true = false;
                            break;
                        }
                    }
                    if(is_true)
                    {
                        scnd[k] = c;
                        break;
                    }
                }
                if(scnd[k] == 0)
                    ok = false;
            }
            if(ok == true)
            {
                for(int i=0; i<n; i++)
                    ans += scnd[i%j];
                break;
            }
        }
        cout << ans << nl;
    }
    return 0;
}