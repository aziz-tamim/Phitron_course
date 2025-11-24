#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        ll x;
        cin >> x;
        
        ll a = 0, b=0, j=30;
        for(j; j>=0; j--)
        {
            ll val = 1LL << j;
            if(x & val)
            {
                if(a<=b)
                    a+=val;
                else
                    b+= val;
            }
        }
        if(a>b)
            swap(a,b);
        cout << a << " " << b << "\n";
    }
    return 0;
}
