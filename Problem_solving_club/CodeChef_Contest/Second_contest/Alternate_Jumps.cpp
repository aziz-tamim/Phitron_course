#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    vector<int> ans;
    for(int i=0; i<tc; i++)
    {
        int n;
        cin >> n;
        int find;
        if(n%2 == 0)
            find = n/2;
        else
            find = (n+1)/2;
        ans.push_back(find);
    }
    for(auto x : ans)
        cout << x << "\n";
    return 0;
}