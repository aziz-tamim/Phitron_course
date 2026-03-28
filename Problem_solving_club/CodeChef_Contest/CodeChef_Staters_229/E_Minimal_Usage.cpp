// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n,k,s,m;
        cin >> n >> k >> s >> m;
        if(1<m && m<n)
        {
            bool flg = false;
            for(int x =0; x<=k; x++)
            {
                int y = k-x;
                ll lo = x*1 + y*(m+1);
                ll hi = x*(m-1) + y*n;
                if(lo<=s && s <= hi)
                {
                    flg = true;
                    break;
                }
            }
            if(flg)
                cout << 0 << nl; // without M
            else
                cout << 1 << nl; // with M
        }
        else if(m==1)
        {
            for(int x =0; x<=k; x++) // M type x poriman
            {
                int y = k-x;
                ll lo = 2*y;
                ll hi = n*y;
                ll ro_lagbe = s-x*1;
                if(lo <= ro_lagbe && ro_lagbe <= hi)
                {
                    cout << x << nl;
                    break;
                }
            }
        }
        else if(m==n)
        {
            for(int x =0; x<=k; x++) // M type x poriman
            {
                int y = k-x;
                ll lo = 1*y;
                ll hi = (n-1)*y;
                ll ro_lagbe = s-x*n;
                if(lo <= ro_lagbe && ro_lagbe <= hi)
                {
                    cout << x << nl;
                    break;
                }
            }
        }
    }
    return 0;
}