// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
vector<int> group(7);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    group[1] = 1;
    group[6] = 1;
    group[2] = 2;
    group[5] = 2;
    group[3] = 3;
    group[4] = 3;
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        vector<int> block(n);
        for(int i=0; i<n; i++)
            block[i] = group[a[i]];
        // for(auto i : block)
        //     cout << i << sp;
        // cout << nl;
        int cnt = 0;
        for(int i=0; i<n; )
        {
            int j=i,sz=0;
            while(j<n && block[j] == block[i])
            {
                sz++, j++;
            }
            cnt += sz/2;
            i = j;
        }
        cout << cnt << nl;
    }
    return 0;
}