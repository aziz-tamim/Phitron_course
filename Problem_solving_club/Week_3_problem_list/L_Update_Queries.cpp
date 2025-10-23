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
        int n,m;
        cin >> n >> m;
        string str;
        cin >> str;

        vector<int> arr(m);
        for(int i=0; i<m; i++)
            cin >> arr[i];
        string str2;
        cin >> str2;
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        
        sort(str2.begin(), str2.end());
        int k = min((int)arr.size(), (int)str2.size());
        for(int i=0; i<k; i++)
            str[arr[i]-1] = str2[i];

        cout << str << "\n";
    }
    return 0;
}
