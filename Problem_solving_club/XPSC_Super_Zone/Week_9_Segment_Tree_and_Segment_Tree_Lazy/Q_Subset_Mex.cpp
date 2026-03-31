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
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int,int> cnt;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            cnt[arr[i]]++;
        }
        int mxA = 0, mxB=0;
        while(cnt[mxA]>0)
        {
            cnt[mxA]--;
            mxA++;
        }
        while(cnt[mxB]>0)
        {
            cnt[mxB]--;
            mxB++;
        }
        cout << mxA + mxB << nl;
    }
    return 0;
}