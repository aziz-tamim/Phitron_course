#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int value = 200005;
    vector<int> arr1, arr2;
    arr1.resize(value + 2);
    arr2.resize(value + 2);
    int num, k, q;
    cin >> num >> k >> q;
    int rsz = 200005;
    for (int i = 0; i < num; i++)
    {
        int lft, rgt;
        cin >> lft >> rgt;
        arr1[lft]++;
        arr1[rgt + 1]--;
    }
    for (int i = 1; i <= rsz; i++)
        arr1[i] = arr1[i] + arr1[i - 1];

    for (int i = 1; i <= rsz; i++)
    {
        if (arr1[i] >= k)
            arr2[i] = 1;
        else
            arr2[i] = 0;
    }
    for (int i = 1; i <= rsz; i++)
        arr2[i] = arr2[i] + arr2[i - 1];

    while(q--)
    {
        int fst1, fst2;
        cin >> fst1 >> fst2;
        int fnal_ans = arr2[fst2] - arr2[fst1 - 1];
        cout << fnal_ans << "\n";
    }
    return 0;
}
