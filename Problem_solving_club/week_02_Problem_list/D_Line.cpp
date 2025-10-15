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
        int a;
        cin >> a;
        string mouve;
        cin >> mouve;

        vector<long long> earn;
        long long cnt = 0;
        for(int i=0; i<a; i++)
        {
            if(mouve[i] == 'L')
            {
                cnt += i;
                earn.push_back((a-i-1)-i);
            }
            else
            {
                cnt += (a-i -1);
                earn.push_back(i-(a-i -1));
            }
        }
        sort(earn.rbegin(), earn.rend());

        for(int i=0; i<a;i++)
        {
            if(earn[i] >0)
                cnt += earn[i];
            cout << cnt << " ";
        }
        cout << "\n";
    }
    
    return 0;
}