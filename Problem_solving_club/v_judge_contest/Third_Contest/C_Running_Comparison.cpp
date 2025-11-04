#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> ali(n),bob(n);
        for(int i=0; i<n; i++)
            cin >> ali[i];
        for(int i=0; i<n; i++)
            cin >> bob[i];
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(bob[i] <= 2*ali[i] && ali[i] <=2*bob[i])
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}

