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
        int k,n,m;
        cin >> k >> n >> m;
        vector<int> arr1(n), arr2(m);
        for(int i=0; i<n; i++)
            cin >> arr1[i];
        for(int j=0; j<m; j++)
            cin >> arr2[j];

        vector<int> ans;
        int i=0, j=0 , ln =k;
        bool istrue = true;
        while(i<n || j<m)
        {
            bool ysfls = false;
            if(i<n && arr1[i] == 0)
            {
                ans.push_back(0);
                ln++;
                i++;
                ysfls = true;
            }
            else if(j<m && arr2[j] ==0)
            {
                ans.push_back(0);
                ln++;
                j++;
                ysfls = true;
            }
            else if(i<n && arr1[i] <= ln)
            {
                ans.push_back(arr1[i]);
                i++;
                ysfls = true;
            }
            else if(j<m && arr2[j] <=ln)
            {
                ans.push_back(arr2[j]);
                j++;
                ysfls = true;
            }
            if(ysfls == false)
            {
                istrue = false;
                break;
            }
        }
        if(istrue == false)
            cout << -1 << "\n";
        else
        {
            for(int x : ans)
                cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}


