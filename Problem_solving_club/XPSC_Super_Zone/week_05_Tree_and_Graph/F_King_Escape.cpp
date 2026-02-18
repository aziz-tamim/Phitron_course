// AUTHOR :- ABDUL AZIZ TAMIM (tamimaziz2007@gmail.com)
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
    int ax, ay,bx,by,cx, cy;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;
    bool uporeTop = bx < ax;
    bool uporeLeft = by < ay;
    
    bool tgrTop = cx < ax;
    bool tgrLeft = cy < ay;
    if(uporeTop != tgrTop || uporeLeft != tgrLeft)
        cout << "NO" << nl;
    else
        cout << "YES" << nl;
    return 0;
}