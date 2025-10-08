#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string sstr;
    cin >> sstr;
    bool valid = false;
    for(int i=1; i<sstr.length(); i++)
    {
        if(sstr[i] == 's' && sstr[i-1] == 's')
        {
            valid = true;
            break;
        }
    }

    if(valid == true)
        cout << "hiss" << "\n";
    else
        cout << "no hiss" << "\n";
    return 0;
}