#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool fls = false;
    while (ss >> word)
    {
        if(word == "Jessica")
        {
            fls = true;
            break;
        }
    }
    if(fls)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}