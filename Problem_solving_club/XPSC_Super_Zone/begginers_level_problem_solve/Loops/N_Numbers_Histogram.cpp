// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char ch;
    cin >> ch;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<arr[i]; j++)
        {
            cout << ch;
        }
        cout << nl;
    }
    return 0;
}