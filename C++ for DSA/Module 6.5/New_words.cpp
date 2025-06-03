#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int freq[26] = {0};
    for(char c : s)
    {
        if(c >= 'a' && c <= 'z')
        {
            if(c == 'e' || c == 'g' || c == 'y' || c == 'p' || c == 't')
            {   
                freq[c - 'a']++;
            }
        }
        else if(c >= 'A' && c <= 'Z')
        {
            if(c == 'E' || c == 'G' || c == 'Y' || c == 'P' || c == 'T')
            {   
                freq[c - 'A']++;
            }
        }
    }
    int e = freq['e'-'a'];
    int g = freq['g'-'a'];
    int y = freq['y'-'a'];
    int p = freq['p'-'a'];
    int t = freq['t'-'a'];
    int result = min({e,g,y,p,t});
    cout << result << endl;
    return 0;
}