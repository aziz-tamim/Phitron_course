#include <bits/stdc++.h>
using namespace std;
const int maxN = (1LL << 15);
vector<int> allpalindrome;
bool ispalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
            return false;
    }
    return true;
}
void markpalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if (ispalindrome(i))
        {
            allpalindrome.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    markpalindrome();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), cnt(maxN + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        long long ans = n;
        // O(n*500)
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allpalindrome.size(); j++)
            {
                int curr = (a[i] ^ allpalindrome[j]);
                ans += cnt[curr];
            }
        }
        cout << (ans / 2) << '\n';
    }
    return 0;
}


