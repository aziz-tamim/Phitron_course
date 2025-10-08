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
        int num;
        cin >> num;
        if(num >= 5)
            cout << 0 << '\n';
        else
        {
            int fact = 1;
            for(int i=1; i<=num; i++)
            {
                fact = fact*i;
            }
            cout << fact%10 << "\n";
        }
    }
    return 0;
}