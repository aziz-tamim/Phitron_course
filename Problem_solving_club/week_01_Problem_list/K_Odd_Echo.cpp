#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for(int i=1; i<=tc; i++)
    {
        string str;
        cin >> str;
        if(i%2 !=0)
        {
            cout << str << "\n";
        }
    }
    return 0;
}