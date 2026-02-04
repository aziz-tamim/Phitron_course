// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
void solve(int test_case)
{
    int n,m,h;
    cin >> n >> m >> h;
    vector<int> a(n+1), dif(n+1,0), upd(n+1,-1);
    for(int i=1; i<=n; i++)
        cin >> a[i];
    int last = -1;
    for(int i=1; i<=m; i++)
    {
        int b,c; cin >> b >> c;
        if(upd[b] < last)
            dif[b] = 0;
        dif[b] += c;
        upd[b] = i;
        if(a[b] + dif[b] > h)
        {
            last = i;
            dif[b] = 0;
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(upd[i] < last)
            dif[i] = 0;
        cout << a[i] + dif[i] << " ";
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve(tc);
    }
    return 0;
}