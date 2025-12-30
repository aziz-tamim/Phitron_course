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
        int chef = arr[0];
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>= chef)
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}