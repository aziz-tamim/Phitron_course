#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        int nm;
        cin >> nm;
        vector<int> arr(nm);
        for(int i=0; i<nm; i++)
            arr[i] = i+1;
        if(nm >=3)
            swap(arr[nm-1], arr[nm-2]);

        for(int i=0; i<nm; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    return 0;
}

