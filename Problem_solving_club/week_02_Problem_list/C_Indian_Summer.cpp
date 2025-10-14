#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<string,string>> par;
    int unique_val = 0;
    
    for(int i=0; i<n; i++)
    {
        string tree, color;
        cin >> tree >> color;
        pair<string,string> leaf = {tree, color};

        bool valid = false;
        for(auto &val : par)
        {
            if(val == leaf)
            {
                valid = true;
                break;
            }
        }
        if(valid == false)
        {
            par.push_back(leaf);
            unique_val++;
        }
    }
    cout << unique_val << '\n';
    return 0;
}