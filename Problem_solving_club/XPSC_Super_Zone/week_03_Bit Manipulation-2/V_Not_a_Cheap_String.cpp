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
        string str;
        cin >> str;
        int x;
        cin >> x;
        int sum = 0;
        for(char ch : str)
            sum += (ch - 'a' + 1);
        vector<int> cnt(26, 0);
        for(char ch : str)
            cnt[ch - 'a']++;
        for(int i=25; i>=0 && sum > x; i--)
        {
            while(cnt[i] && sum > x)
            {
                sum -= i + 1;
                cnt[i]--;
            }
        }
        for(char ch : str)
        {
            if(cnt[ch-'a'])
            {
                cout << ch;
                cnt[ch -'a']--;
            }
        }
        cout << nl;
    }
    return 0;
}