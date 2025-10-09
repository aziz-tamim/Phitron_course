#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int hight = INT_MAX;

        for(int i=0; i<a; i++)
        {
            int d,e;
            cin >> d >> e;
            int ans = abs(b-d) + abs(c-e);
            hight = min(hight,ans);
        }
        cout << hight << "\n";
    }
    
    return 0;
}
