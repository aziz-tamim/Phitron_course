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
        int n,m;
        cin >> n >> m;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int diff = 0;
        for(int j=1; j<=m; j++)
        {
            bool right = false;
            for(int i=0; i<n; i++)
            {
                if(arr[i] == j)
                {
                    right = true;
                    break;
                }
            }
            if(right == false)
                diff++;
        }
        cout << diff << "\n";
    }
    return 0;
}