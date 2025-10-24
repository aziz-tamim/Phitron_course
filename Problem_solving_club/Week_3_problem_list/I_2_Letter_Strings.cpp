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
        int n;
        cin >> n;
        vector<string> str(n);
        for(int i=0; i<n; i++)
            cin >> str[i];
        long long ans = 0;
        unordered_map<string,long long> freq;
        for(auto &x : str)
        {
            for(int i=0; i<2; i++)
            {
                for(char c = 'a'; c<='k'; c++)
                {
                    if(c== x[i])
                        continue;
                    string tmp = x;
                    tmp[i] = c;
                    if(freq.count(tmp))
                        ans+= freq[tmp];
                }
            }
            freq[x]++;
        }
        cout << ans << "\n";
    }
    return 0;
}