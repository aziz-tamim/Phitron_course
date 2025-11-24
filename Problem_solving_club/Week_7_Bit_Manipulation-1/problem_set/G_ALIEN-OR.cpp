#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            int x = 0;
            for(int j =0; j<m; j++)
            {
                if (s[j] == '1')
                    x |= (1 << (m-j-1));
            }
            v[i] = x;
        }
        vector<int> dp(1<<m, 0);
        queue<int> q;

        for (int x : v)
        {
            if(!dp[x])
            {
                dp[x] = 1;
                q.push(x);
            }
        }
        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            for (int x : v)
            {
                int nx = cur | x;
                if (!dp[nx])
                {
                    dp[nx] = 1;
                    q.push(nx);
                }
            }
        }
        bool right = true;
        for (int j=1; j <(1 <<m); j++)
        {
            if(dp[j] == false)
            {
                right = false;
                break;
            }
        }
        if(right == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << "\n";
    }
}
