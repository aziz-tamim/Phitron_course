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
        int a,b,c;
        cin >> a>>b >> c;
        
        ll all = a+b;
        ll ans = all /c;
        if(ans%2 ==0)
            cout << "Chef" <<'\n';
        else
            cout<< "Paja" << '\n';
    }
    return 0;
}