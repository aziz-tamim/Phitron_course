#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;

    string ans = "";
    for(char c : str)
    {
        if(c == '<')
        {
            if(ans.empty() == false)
                ans.pop_back();
        }
        else
            ans.push_back(c);
    }
    cout << ans << "\n";
    return 0;
}