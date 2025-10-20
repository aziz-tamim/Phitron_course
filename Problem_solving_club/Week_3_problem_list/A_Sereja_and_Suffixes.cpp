#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> arr(n+1);
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    vector<int> suff_cnt(n+1);
    vector<bool> Sereja(100001, false);

    int distcnt = 0;
    for(int i=n; i>=1; i--)
    {
        if(Sereja[arr[i]] == false)
        {
            distcnt++;
            Sereja[arr[i]] = true;
        }
        suff_cnt[i] = distcnt;
    }
    while(m--)
    {
        int l1;
        cin >> l1;
        cout << suff_cnt[l1] << "\n";
    }
    return 0;
}