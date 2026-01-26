// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        bool ok = false;
        for(int i=0; i<n; i++)
        {
            if(ok)
                break;
            int mx = arr[i];
            int pos = -1;
            for(int j=i+1; j<n; j++)
            {
                if(arr[j] > mx)
                {
                    mx = arr[j];
                    pos = j;
                }
            }
            if(pos != -1)
            {
                reverse(arr.begin()+i, arr.begin()+pos+1);
                ok = true;
            }
        }
        for(int x : arr)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}