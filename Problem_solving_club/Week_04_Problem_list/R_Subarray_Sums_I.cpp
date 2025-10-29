#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, trg;
    cin >> n >> trg;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    unordered_map<long long , int> frq;
    frq[0] = 1;
    long long prfix = 0;
    long long ans = 0;
    for(int i=0; i<n; i++)
    {
        prfix += a[i];
        if(frq.count(prfix-trg))
            ans += frq[prfix-trg];
        frq[prfix]++;
    }
    cout << ans << "\n";
    return 0;
}