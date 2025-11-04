#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int attack1 = 1+max(0,(a-c+b-1)/b);
        int attack2 = 1+(a+b-1)/b;
        cout << min(attack1,attack2) << '\n';
    }
    return 0;
}