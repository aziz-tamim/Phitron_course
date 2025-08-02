#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) // O(N)
    {
        for(int j=1; j<=n; j*=2) // O(log N)
        {
            cout << "Hello" << endl;
        }
    }
    return 0;
}