#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> fre(26);
    for(char c : s)
    {
        fre[c-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(fre[i] > 0)
        {
            cout << (char)(i+'a') << " : " << fre[i] << endl;
        }
    }
    return 0;
}

// this program time complexity O(N)