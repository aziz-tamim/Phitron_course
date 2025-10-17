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
        int num;
        cin >> num;
        vector<int> arr1(num), arr2(num);
        for(int i = 0; i < num; i++)
            cin >> arr1[i];
        for(int i = 0; i < num; i++)
            cin >> arr2[i];

        int hapDa = 0;
        for(int i = 0; i < num; i++)
        {
            if (arr2[i] <=2 * arr1[i] && arr1[i] <= 2 *arr2[i])
                hapDa++;
        }
        cout << hapDa << "\n";
    }
    return 0;
}