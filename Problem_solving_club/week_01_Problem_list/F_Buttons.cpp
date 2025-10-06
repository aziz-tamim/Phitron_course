#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int btn1 = a+(a-1);
    int btn2 = b+(b-1);
    int btn3 = a+b;

    int ans = max({btn1,btn2,btn3});
    cout << ans << "\n";
    return 0;
}