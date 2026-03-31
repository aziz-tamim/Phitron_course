// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e5+9;
ll a[maxN], t[maxN*4], lazy[maxN*4];
void push(int n, int b, int e)
{
    if(lazy[n] == 0)
        return;
    t[n] = max(t[n], lazy[n]);
    if(b != e)
    {
        int l = 2*n, r = 2*n+1;
        lazy[l] = max(lazy[l], lazy[n]);
        lazy[r] = max(lazy[r], lazy[n]);
    }
    lazy[n] = 0;
}
void update(int n, int b, int e, int i, int j, ll v)
{
    push(n,b,e);
    if(e<i || j<b)
        return;
    if(b >= i && e <= j)
    {
        lazy[n] = v;
        push(n,b,e);
        return;
    }
    int mid = (b+e)/2, l = 2*n, r = 2*n+1;
    update(l,b,mid,i,j,v);
    update(r,mid+1,e,i,j,v);
    t[n] = max(t[2*n], t[2*n+1]);
}
ll query(int n, int b, int e, int i)
{
    push(n,b,e);
    if(b == e)
        return t[n];
    int mid = (b+e)/2;
    if(i <= mid)
        return query(2*n,b, mid, i);
    else
        return query(2*n+1, mid+1, e, i);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    while(m--)
    {
        int t;
        cin >> t;
        if(t==1)
        {
            int l,r;
            ll v;
            cin >> l >> r >> v;
            update(1,0,n-1,l,r-1,v);
        }
        else
        {
            int l;
            cin >> l;
            cout<< query(1,0,n-1,l) << nl;
        }
    }
    return 0;
}