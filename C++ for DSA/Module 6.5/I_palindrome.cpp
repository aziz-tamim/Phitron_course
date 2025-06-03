#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = 0, r = s.length() - 1;
    int palindrome = 1;
    while(l < r)
    {
        if(s[l] != s[r])
        {
            palindrome = 0;
            break;
        }
        l++;
        r--;
    }
    if(palindrome == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}