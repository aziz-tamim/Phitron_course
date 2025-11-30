#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        if(a==b)
        {
            cout << "YES" << "\n";
            continue;
        }
        if(n==1){
            cout << "NO" << "\n";
            continue;
        }
        int cnt1 = count(a.begin(), a.end(), '0');
        int cnt2 = count(b.begin(), b.end(), '0');

        if(cnt1 ==cnt2)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    
    return 0;
}