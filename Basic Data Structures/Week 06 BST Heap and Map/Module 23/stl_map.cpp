#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["tamim"] = 2; // key value..
    mp["ramim"] = 500; // O(logN)
    mp["shamim"] = 50;
    mp["hamim"] = 0;

    for(auto it = mp.begin(); it!= mp.end(); it++) // O(NlogN)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    // if(mp.count("hamim"))
    // {
    //     cout << "Ache";
    // }
    // else
    //     cout << "Nai";
    return 0;
}