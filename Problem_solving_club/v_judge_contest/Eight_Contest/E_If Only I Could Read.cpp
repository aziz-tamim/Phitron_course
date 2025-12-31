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
            cin >>arr[i];
        int l=-1, r=-1;
        for(int i=0; i+1<n; i++)
        {
            if(arr[i]>arr[i+1])
            {
                l=i;
                r=i+1;
                break;
            }
        }
        if(l==-1 && r==-1)
            cout << "-1" << "\n";
        else
            cout << l+1 << " " << r+1 << "\n";
    }
    return 0;
}