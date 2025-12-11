#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int a, b;
        cin >> a >>b;
        int fst = (b + a)/2;
        int scnd = (b - a)/2;

        cout << fst << " " << scnd << "\n";
    }
    return 0;
}
