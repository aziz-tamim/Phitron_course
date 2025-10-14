#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        string res;
        stack<int> low, up;

        for(char c:s)
        {
            if(c=='b')
            {
                if(!low.empty())
                {
                    int index = low.top();
                    low.pop();
                    res[index] = 0;
                }
            }
            else if(c =='B')
            {
                if(!up.empty())
                {
                    int index = up.top();
                    up.pop();
                    res[index] = 0;
                }
            }
            else
            {
                int index = res.size();
                res.push_back(c);

                if(islower(c))
                    low.push(index);
                if(isupper(c))
                    up.push(index);
            }
        }

        for(char c :res)
            if(c) cout << c;
        cout << "\n";
    }
}
