// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e5+9;
ll t[maxN*4], lazy[maxN*4];
void push(int n, int b, int e)
{
    if(lazy[n] == -1)
        return;
    t[n] = lazy[n];
    if(b!=e)
    {
        lazy[2*n] = lazy[n];
        lazy[2*n+1] = lazy[n];
    }
    lazy[n] = -1;
}
void update(int n, int b, int e, int i, int j, ll v)
{
    push(n,b,e);
    if(e<i || j < b)
        return;
    if(i<=b && e<=j)
    {
        lazy[n] = v;
        push(n,b,e);
        return;
    }
    int mid = (b+e)/2;
    update(2*n,b,mid,i,j,v);
    update(2*n+1, mid+1, e, i, j, v);
}
ll query(int n, int b, int e, int i)
{
    push(n,b,e);
    if(b == e)
        return t[n];
    int mid = (b+e)/2;
    if(i <= mid)
        return query(2*n, b, mid, i);
    else
        return query(2*n+1, mid+1, e, i);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >>m;
    memset(lazy, -1, sizeof(lazy));
    while(m--)
    {
        int t;
        cin >> t;
        if(t == 1)
        {
            int l,r;
            ll v;
            cin >> l >> r >> v;
            update(1,0,n-1,l,r-1,v);
        }
        else
        {
            int i;
            cin >> i;
            cout << query(1,0,n-1,i) << nl;
        }
    }
    return 0;
}