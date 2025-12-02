#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b;
        cin >> a >> b;
        if(a%2==0)
            cout << "Yes" << '\n';
        else
        {
            if(b==1)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
    }
    return 0;
}