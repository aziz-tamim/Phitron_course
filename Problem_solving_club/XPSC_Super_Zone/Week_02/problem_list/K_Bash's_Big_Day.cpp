// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include <bits/stdc++.h>
using namespace std;
const int Max = 100005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(Max, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    int ans = 1;
    for(int i=2; i<Max; i++)
    {
        int cnt = 0;
        for(int j = i; j<Max; j+=i)
            cnt += freq[j];
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
    return 0;
}
