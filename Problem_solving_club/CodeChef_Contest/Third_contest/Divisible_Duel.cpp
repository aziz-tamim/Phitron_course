#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for(int i=0; i<tc; i++)
    {
        int x,y;
        cin >> x >> y;
        int fst = 0, fst2 = 0;
        for(int i=x; i<=y; i+=x)
        {
            if(i%2 == 0)
                fst += i;
            else
                fst2 += i;
        }
        if(fst >= fst2)
            cout << "YES" << "\n";
        else
            cout << "NO" << endl;
    }
    return 0;
}