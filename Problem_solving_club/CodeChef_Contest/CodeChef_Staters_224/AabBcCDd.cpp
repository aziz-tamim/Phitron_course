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
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if('A' <= s[i] && s[i] <= 'Z')
            {
                s[i] = (s[i] | (1<<5));
            }
        }
        vector<int> freq(26);
        for(int i=0; i<n; i++)
        {
            freq[s[i] - 'a']++;
        }
        sort(freq.rbegin(), freq.rend());
        cout << freq[0] + freq[1] << nl;
    }
    return 0;
}