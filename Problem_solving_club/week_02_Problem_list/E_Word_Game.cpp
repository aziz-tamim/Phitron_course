#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> v[3];
        map<string,int> freq;

        for(int i=0; i<3; i++)
        {
            v[i].resize(n);
            for(int j=0; j<n; j++)
            {
                cin >> v[i][j];
                freq[v[i][j]]++;
            }
        }

        int cnt[3] = {0,0,0};
        for(int i=0 ;i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                int fro = freq[v[i][j]];
                if(fro == 1)
                    cnt[i] += 3;
                else if(fro == 2)
                    cnt[i] += 1;
            }
        }
        
        cout << cnt[0] << " " << cnt[1] << " " << cnt[2] <<'\n';
    }
    return 0;
}