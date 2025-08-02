#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s[4] << endl; //access the ith index of the string.
    cout << s.at(0) << endl; // access the ith index of the string.
    cout << s.back() << endl; // access the last element of the string.
    cout << s.front() << endl; // access the first element of the string.
    return 0;
}