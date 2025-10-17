#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<long long> arr1(num);
    for(int i=0; i<num; i++)
        cin >> arr1[i];

    vector<long long> arr2;
    if (num%2 == 0)
    {
        for(int i=0; i<num; i++)
        {
            if((i+1)%2 == 1)
                arr2.push_back(arr1[i]);
            else
                arr2.insert(arr2.begin(), arr1[i]);
        }
    }
    else
    {
        for(int i=0; i<num; i++)
        {
            if((i+1)%2 == 1)
                arr2.insert(arr2.begin(), arr1[i]);
            else
                arr2.push_back(arr1[i]);
        }
    }
    for (auto x : arr2)
        cout << x << " ";
    cout << "\n";

    return 0;
}

