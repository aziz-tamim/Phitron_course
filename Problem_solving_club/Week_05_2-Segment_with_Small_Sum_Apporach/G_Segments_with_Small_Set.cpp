#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> freq;
    int l = 0;
    int cnt = 0;
    for (int r = 0; r < n; r++)
    {
        freq[a[r]]++;
        while ((int)freq.size() > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
                freq.erase(a[l]);
            l++;
        }
        cnt += (r - l + 1);
    }
    cout << cnt << "\n";
    return 0;
}