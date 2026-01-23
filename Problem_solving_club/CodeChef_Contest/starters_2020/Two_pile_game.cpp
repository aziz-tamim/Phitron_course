// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
        int x,y;
        cin >> x >> y; 
        if(x&1) // x%2!= 0 odd check
            cout << "Alice" << "\n";
        else
            cout << "Bob" << "\n";
    }
    return 0;
}