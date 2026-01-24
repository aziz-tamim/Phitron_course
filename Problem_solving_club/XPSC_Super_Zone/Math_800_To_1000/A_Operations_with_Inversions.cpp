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
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int cnt = 0;
        int mx = arr[0];
        for(int i=0; i<n; i++)
        {
            if(mx > arr[i])
                cnt++;
            else
                mx = arr[i];
        }
        cout << cnt << '\n';
    }
    return 0;
}