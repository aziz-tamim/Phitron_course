#include <iostream>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << "\n";
        else if((a^b) <= a)
        {
            cout << 1 << "\n";
            cout << (a^b) << "\n";
        }
        else
        {
            ll hist = 1;
            while (hist <= a)
                hist *= 2;
            hist /= 2;

            if (hist * 2 <= b)
                cout << -1 << "\n";
            else {
                cout << 2 << "\n";
                ll first = (a-hist) ^ b;
                ll second = (b & hist) ? 0 : hist;
                cout << first << " " << second << "\n";
            }
        }
    }
    return 0;
}
