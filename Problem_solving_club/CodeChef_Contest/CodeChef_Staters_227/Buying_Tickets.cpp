// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> cost(n);
        for(int i=0; i<n; i++)
            cin >> cost[i];
        string s;
        cin >> s;
        vector<int> available;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '0')
                available.push_back(cost[i]);
        }
        int khali = available.size();
        if(khali<k)
            cout << -1 << nl;
        else
        {
            sort(available.begin(), available.end());
            int sum = 0;
            for(int i=0; i<k; i++)
            {
                sum += available[i];
            }
            cout << sum << nl;
        }
    }
    return 0;
}