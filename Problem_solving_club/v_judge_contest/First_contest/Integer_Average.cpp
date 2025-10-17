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
        int num;
        cin >> num;
        vector<int> arr(num);
        int eve = 0;
        int odd = 0;

        for(int i=0; i<num; i++)
        {
            cin >> arr[i];
            if(arr[i]%2 == 0)
                eve++;
            else
                odd++;
        }
        if (eve >= 2 || odd >= 2)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}