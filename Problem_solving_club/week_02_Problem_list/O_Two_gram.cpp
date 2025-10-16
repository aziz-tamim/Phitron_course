#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    cin >> num;
    string s;
    cin >> s;
    map<string,int > mp;
    for(int i=0; i<num-1; i++)
    {
        string con = s.substr(i,2);
        mp[con]++;
    }
    string ans;
    int cnt = 0;
    for(auto &x : mp)
    {
        if(x.second > cnt)
        {
            cnt = x.second;
            ans = x.first;
        }
    }
    cout << ans << "\n";
    return 0;
}