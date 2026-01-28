// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    // O(2^n * n)
    for(int i=0; i<(1<<n);i++)
    {
        // cout << i << " -> ";
        for(int k=0; k<n; k++)
        {
            if((i>>k) & 1) {
                cout << 1 << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}