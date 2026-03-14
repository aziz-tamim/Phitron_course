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
    int n;
    cin >> n;
    for(int i=2; i<=n; i++)
    {
        bool prime = true;
        for(int j=2; j*j <=i; j++)
        {
            if(i%j == 0)
            {
                prime = false;
                break;
            }
        }
        if(prime)
            cout << i << " ";
    }
    return 0;
}