#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        int odd = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]&1)
                odd++;
        }
        if(odd == 1)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
    return 0;
}