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
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        int curr = 0, curr_mx = 0;
        int ady_curr =0, ady_mx = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>0)
            {
                curr++;
                curr_mx = max(curr_mx, curr);
            }
            else
                curr = 0;
        }
        for(int i=0; i<n; i++)
        {
            if(b[i]>0)
            {
                ady_curr++;
                ady_mx = max(ady_mx, ady_curr);
            }
            else  
                ady_curr =0;
        }
        if(curr_mx > ady_mx)
            cout << "OM" << "\n";
        else if(ady_mx > curr_mx)
            cout << "ADDY" << "\n";
        else
            cout << "DRAW" << "\n";
    }
    return 0;
}