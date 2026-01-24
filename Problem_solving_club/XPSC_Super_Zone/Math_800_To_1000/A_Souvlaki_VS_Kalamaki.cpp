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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr.begin(),arr.end());
        bool ok = true;
        for(int i=1; i<n; i+=2)
        {
            if(arr[i] != arr[i-1])
            {
                ok = false;
                break;
            }
        }
        if(ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}