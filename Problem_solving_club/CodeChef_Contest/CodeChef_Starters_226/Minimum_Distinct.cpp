// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        map<int,int> freq;
        for(int x : a)
            freq[x]++;
        int tgr = a[0];
        vector<int> diffreq;
        for(auto &p : freq)
        {
            if(p.first != tgr)
                diffreq.push_back(p.second);
        }
        sort(diffreq.begin(), diffreq.end());
        int delgrp = 0;
        for(int f : diffreq)
        {
            if(k >= f)
            {
                k -= f;
                delgrp++;
            }
            else
                break;
        }
        int total = freq.size();
        int result = total - delgrp;
        cout << result << nl;
    }
    return 0;
}
