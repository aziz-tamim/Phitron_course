#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string word1, word2;
        cin >> word1 >> word2;
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());

        if(word1 == word2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}