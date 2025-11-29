#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        ll fact =1;
        for(int i=2; i<=n; i++)
        {
            fact*=i;
        }
        cout << fact << '\n';
    }
    return 0;
}