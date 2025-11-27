#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >>tc;
    while(tc--)
    {
        int nm;
        cin >> nm;
        vector<int> arr1(nm), arr2(nm);
        for (int i=0; i<nm; i++)
            cin >> arr1[i];
        for (int i = 0; i < nm; i++)
            cin >> arr2[i];
        bool poss = true;
        if (nm == 1)
            poss = true;
        else if (nm == 2)
        {
            if (!(arr1[0] == arr2[0] && arr1[1] == arr2[1]))
                poss = false;
        }
        else
            poss = true;
        if (poss == true)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}
