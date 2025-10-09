#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        cout << n << "\n";
        for(int i=1; i<n;i++)
        {
            cout << i+1 << " ";
        }
        cout << 1 << "\n";
    }
    
    return 0;
}
