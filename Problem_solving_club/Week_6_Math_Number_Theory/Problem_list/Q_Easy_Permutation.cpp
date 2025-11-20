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
        for(int i=0; i<n; i++)
        {
            cout << n-i << " ";
            // if(i>2)
            //     cout << " ";
        }
        cout << '\n';
    }
    return 0;
}