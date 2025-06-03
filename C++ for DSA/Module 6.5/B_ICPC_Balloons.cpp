#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int solve[26] = {0};
        int balloon = 0;
        for(char c : s)
        {
            if(solve[c-'A'] == 0)
            {
                balloon +=2;
                solve[c-'A'] = 1;
            }
            else
            {
                balloon += 1;
            }
        }
        cout << balloon << endl;
    }
    return 0;
}