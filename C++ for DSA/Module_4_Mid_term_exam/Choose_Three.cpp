#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, target;
        cin >> n >> target;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int s = 0;
        for(int i=0; i < n-2; i++)
        {
            for(int j = i+1; j < n-1; j++)
            {
                for(int k = j+1; k < n; k++)
                {
                    int sum = a[i] + a[j] + a[k];
                    if(sum == target)
                    {
                        cout << "YES" << endl;
                        s = 1;
                        break;
                    }
                }
                if(s)
                {
                    break;
                }
            }
            if(s)
            {
                break;
            }
        }
        if(s == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}