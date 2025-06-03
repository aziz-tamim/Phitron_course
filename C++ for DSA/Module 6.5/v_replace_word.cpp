#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int it = s.find("EGYPT");
    while(it != -1)
    {
        s.replace(it, 5, " ");
        it = s.find("EGYPT",it+1);
    }
    cout << s << endl;
    return 0;
}