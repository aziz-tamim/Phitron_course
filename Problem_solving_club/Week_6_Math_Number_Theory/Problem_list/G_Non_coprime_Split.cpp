#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        bool found = false;
        for(int i=a; i<=b; i++)
        {
            for(int j=2; j*j <=i; j++)
            {
                if(i%j == 0)
                {
                    cout << j << " " << i-j << endl;
                    found = true;
                    break;
                }
            }
            if(found)
                break;
        }
        if(!found)
            cout << "-1" << endl;
    }
}
