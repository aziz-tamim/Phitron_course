#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long mod = 1e9 + 7;
const int maxn = 100005;
ll poW[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    poW[0] = 1;
    for (int i = 1; i < maxn; i++)
        poW[i] = (poW[i - 1] * 2) % mod;

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cout << poW[n - 1] << '\n';
    }
    return 0;
}