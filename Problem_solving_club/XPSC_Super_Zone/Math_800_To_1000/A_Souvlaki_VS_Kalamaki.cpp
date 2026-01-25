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
        int arr[n+1];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr+1, arr+n+1);
        for(int i=2; i<=n-1; i+=2)
        {
            if(arr[i] != arr[i+1])
            {
                cout << "NO" << "\n";
                return;
            }
        }
        cout << "YES" << '\n';
    }
    return 0;
}
