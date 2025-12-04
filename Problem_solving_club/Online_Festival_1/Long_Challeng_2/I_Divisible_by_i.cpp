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
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++)
        {
            if(i%2==1)
            {
                if(i+1 <=n)
                    arr[i] = i+1;
                else
                    arr[i] = i;
            }
            else
                arr[i] = i-1;
        }
        for(int i=1; i<=n; i++)
            cout << arr[i] << " ";
        cout << '\n';
    }
    return 0;
}