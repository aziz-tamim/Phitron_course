#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<pair<int,int>> plar;
        for(int i = 1;i<=n;i++)
            plar.push_back(make_pair(gcd(i,n), i));
        sort(plar.begin(), plar.end(), [](const pair<int,int> &a, const pair<int,int> &b)
        {
            if(a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });

        for(auto &x : plar)
            cout << x.second << " ";
        cout << "\n";
    }
}
