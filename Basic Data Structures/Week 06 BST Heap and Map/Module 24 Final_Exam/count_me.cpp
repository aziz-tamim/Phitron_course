#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin, str);

        stringstream ss(str);
        string word;
        map<string, int> mp;
        int count = 0;
        string find_max;
        
        while(ss >> word)
        {
            mp[word]++;
            if(mp[word] > count)
            {
                count = mp[word];
                find_max = word;
            }
        }
        cout << find_max << " " << count << endl;
    }
    return 0;
}