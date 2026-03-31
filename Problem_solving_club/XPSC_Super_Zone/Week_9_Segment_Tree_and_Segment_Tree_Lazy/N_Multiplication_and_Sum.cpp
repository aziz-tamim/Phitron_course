// AUTHOR :- ABDUL AZIZ TAMIM
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int maxN = 1e5 + 9;
const ll mod = 1e9 + 7;
ll a[maxN], t[maxN * 4], lazy[maxN * 4];

void push(int n, int b, int e)
{
    if (lazy[n] == 1)
        return;
    t[n] = (t[n] * lazy[n]) % mod;
    if (b != e)
    {
        int l = (2 * n), r = (2 * n) + 1;
        lazy[l] = (lazy[l] * lazy[n]) % mod;
        lazy[r] = (lazy[r] * lazy[n]) % mod;
    }
    lazy[n] = 1;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = 1;
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = (t[l] + t[r]) % mod;
}

void update(int n, int b, int e, int i, int j, ll v)
{
    push(n, b, e);
    if (e < i || j < b)
        return;
    if (b >= i && e <= j)
    {
        lazy[n] = (lazy[n] * v) % mod;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    t[n] = (t[l] + t[r]) % mod;
}

long long query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (e < i || j < b)
    {
        return 0;
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    return (query(l, b, mid, i, j) + query(r, mid + 1, e, i, j)) % mod;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    build(1, 1, n);
    for (int i = 0; i < 4 * maxN; i++)
        lazy[i] = 1;
    while (m--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            cout << query(1, 1, n, l, r) << nl;
        }
    }
    return 0;
}