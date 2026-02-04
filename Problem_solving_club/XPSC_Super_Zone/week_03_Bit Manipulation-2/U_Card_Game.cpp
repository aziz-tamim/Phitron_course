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
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int mxA =0, mxB =0;
        int fst = false;
        for(int i=0; i<n; i++)
        {
            if(str[i] == 'A')
            {
                mxA = max(mxA, i+1);
                if(i+1 == 1)
                    fst = true;
            }
            else
                mxB = max(mxB, i+1);
        }
        if(mxA > mxB)
            cout << "Alice" << nl;
        else if(mxB > mxA)
            cout << "Bob" << nl;
        else
        {
            if(fst)
                cout << "Alice" << nl;
            else
                cout << "Bob" << nl;
        }
    }
    return 0;
}
