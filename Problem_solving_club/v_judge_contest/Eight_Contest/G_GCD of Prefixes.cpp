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
        int gc = arr[0];
        bool f = true;
        for(int i=0; i<n; i++)
        {
            int cur_gc =__gcd(gc, arr[i]);
            if(cur_gc != arr[i])
            {
                f = false;
                break;
            }
            else
                gc = cur_gc;
        }
        if(!f)
            cout << "-1" << "\n";
        else
        {
            for(int i=0; i<n; i++)
                cout << arr[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}