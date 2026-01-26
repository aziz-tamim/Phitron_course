// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        int n, s,x;
        cin >> n >> s >> x;
        vector<int> arr(n);
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int ans = (s-sum)% x == 0;
        if(sum<=s && ans)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}