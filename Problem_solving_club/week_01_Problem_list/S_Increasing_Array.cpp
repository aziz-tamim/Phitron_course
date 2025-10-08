#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    long long shift = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            shift = shift + (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout << shift << "\n";
    return 0;
}

