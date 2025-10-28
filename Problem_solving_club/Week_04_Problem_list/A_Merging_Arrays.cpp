#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int arr1[100000], arr2[100000];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int j = 0; j < m; j++)
        cin >> arr2[j];
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else
        {
            cout << arr2[j] << " ";
            j++;
        }
    }
    while (i < n)
    {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << arr2[j] << " ";
        j++;
    }
    return 0;
}
