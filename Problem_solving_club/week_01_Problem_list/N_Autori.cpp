#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string lstr;
    cin >> lstr;
    cout << lstr[0];
    for(int i=0; i<lstr.size(); i++)
    {
        if(lstr[i] == '-')
            cout << lstr[i+1];
    }
    return 0;
}