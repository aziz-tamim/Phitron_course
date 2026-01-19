#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        bool f = false;
        for(auto [x,y]: mp)
        {
            if(y>2)
            {
                f = true;
                break;
            }
        }
        if(f == true)
            cout << "NO" << "\n";
        else    
            cout << "YES" << "\n";
    }
    return 0;
}