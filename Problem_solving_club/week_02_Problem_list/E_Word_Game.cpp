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


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n, m=3;
//         cin >> n;
//         map<string,vector<int>> mp;
//         for(int i=1;i<=m; i++)
//         {
//             for(int j=1; j<=n; j++)
//             {
//                 string s;
//                 cin >> s;
//                 mp[s].push_back(i);
//             }
//         }

//         // for(auto [x,y] : mp)
//         // {
//         //     cout << x << " -> ";
//         //     for(auto val : y)
//         //     {
//         //         cout << val << " ";
//         //     }
//         //     cout << "\n";
//         // }

//         vector<int> ans(m+1);
//         for(auto [x,y] : mp)
//         {
//             vector<int> v = y;
//             if(v.size() == 1)
//             {
//                 ans[v[0] += 3];
//             }
//             if(v.size() == 2)
//             {
//                 ans[v[0]]++;
//                 ans[v[1]]++;
//             }
//         }

//         for(int i=1; i<=m; i++)
//         {
//             cout << ans[i] << " ";
//         }
//         cout << '\n';
//     }
//     return 0;
// }