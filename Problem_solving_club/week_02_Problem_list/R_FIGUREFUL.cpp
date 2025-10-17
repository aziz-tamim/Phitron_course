#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<pair<int,int>, string> mp;
    for(int i=0; i<n;i++)
    {
        int a,b;
        string str;
        cin >> a >> b >> str;
        mp[{a,b}] = str;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int ls1, ls2;
        cin >> ls1 >> ls2;
        cout << mp[{ls1,ls2}] << "\n";
    }
    return 0;
}