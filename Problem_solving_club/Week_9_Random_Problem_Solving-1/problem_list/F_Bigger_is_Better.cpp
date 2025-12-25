#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        bool istrue = true;
        for(int i=0; i<n; i++)
        {
            if(st[i] != 'z')
            {
                istrue = false;
                break;
            }
        }
        if(istrue)
            cout << -1 << endl;
        else
        {
            for(int i=0; i<n; i++)
                cout << 'z';
            cout << endl;
        }
    }
    return 0;
}
