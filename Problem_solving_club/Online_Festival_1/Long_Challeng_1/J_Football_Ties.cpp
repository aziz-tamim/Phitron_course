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
        int c =0;
        while((a-c)%3 !=0 || (b-c)%3 !=0)
        {
            c++;
        }
        cout << c << '\n';
    }
    return 0;
}