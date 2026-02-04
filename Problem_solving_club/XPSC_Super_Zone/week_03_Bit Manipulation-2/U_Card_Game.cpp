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
        set<int> st1, st2;
        for(int i=0; i<n; i++)
        {
            if(str[i] == 'A')
                st1.insert(i+1);
            else
                st2.insert(i+1);
        }
        if(st1.count(1) && st1.count(n))
            cout << "Alice" << nl;
        else if(st2.count(1) && st2.count(n))
            cout << "Bob" << nl;
        else if(st1.count(1))
        {
            if(st2.size() >= 2)
                cout << "Bob" << nl;
            else
                cout << "Alice" << nl;
        }
        else
        {
            if(st1.count(n-1))
                cout << "Alice" << nl;
            else
                cout << "Bob" << nl;
        }
    }
    return 0;
}