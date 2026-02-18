// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
const int N = 2e5+7; /// 2000007
vector<int> group(N+1,-1);
void precompute()
{
    int grp = 1;
    for(int i=1; i<=N;i++)
    {
        if(group[i] == -1)
        {
            for(int j=i; j<=N; j*=2)
            {
                group[j] = grp;
            }
            grp++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute();
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++)   // O(N+N)
            cin >> a[i];
        bool f = true;
        for(int i=1; i<=n; i++)
        {
            if(group[i] != group[a[i]])
            {
                f = false;
                break;
            }
        }
        if(f) 
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}