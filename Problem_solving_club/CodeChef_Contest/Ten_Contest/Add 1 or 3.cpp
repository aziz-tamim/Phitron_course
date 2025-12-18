#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll x, y;
        cin >> x >> y;

        if(y <x || y>3 * x)
            cout << "NO" << "\n";
        else if((y - x) % 2 == 0)
            cout << "YES" << "\n";
        else
            cout << "NO"<< "\n";
    }
    return 0;
}
