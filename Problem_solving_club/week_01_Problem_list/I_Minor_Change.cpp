#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string st1, st2;
    cin >> st1 >> st2;
    int cnt = 0;
    int sz = st1.size() ;
    for(int i=0; i<sz; i++)
    {
        if(st1[i] != st2[i])
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}