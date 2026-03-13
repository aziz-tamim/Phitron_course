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
    double x,y;
    cin >> x >> y;
    if(x == 0 && y == 0)
        cout << "Origem" << nl;
    else if(y==0)
        cout << "Eixo X" << nl;
    else if(x==0)
        cout << "Eixo Y" << nl;
    else
    {
        if(x>0 && y>0)
            cout << "Q1" << nl;
        else if(x<0 && y>0)
            cout << "Q2" << nl;
        else if(x<0 && y<0)
            cout << "Q3" << nl;
        else if(x>0 && y<0)
            cout << "Q4" << nl;
    }
    return 0;
}