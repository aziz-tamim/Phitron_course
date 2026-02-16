// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin >> arr[i];
        vector<int> suff(n);
        suff[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--)
            suff[i] = max(arr[i], suff[i+1]);

        int l = 0, r = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] < suff[i])
            {
                l = i;
                for(int j=i;j<n;j++)
                {
                    if(arr[j]==suff[i])
                    {
                        r = j;
                        break;
                    }
                }
                break;
            }
        }
        if(l < r)
            reverse(arr.begin()+l, arr.begin()+r+1);
        for(int x: arr)
            cout << x << sp;
        cout << nl;
    }
    return 0;
}
