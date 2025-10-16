#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >>s ;
    int freq[26] = {0};
    for(char ch : s)
        freq[ch-'A']++;

    int odd_count = 0;
    char odd_char;
    for(int i=0 ; i<26; i++)
    {
        if(freq[i]%2 == 1)
        {
            odd_count++;
            odd_char = 'A'+i;
        }
    }
    if(odd_count>1)
    {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }
    string vag = "";
    for(int i=0; i<26; i++)
        vag += string(freq[i]/2,'A'+i);
    string rever = vag;
    reverse(rever.begin(), rever.end());

    if(odd_count == 1)
        cout << vag + odd_char +rever << '\n';
    else
        cout << vag + rever << "\n";
    cout << '\n';
    return 0;
}